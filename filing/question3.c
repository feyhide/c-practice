#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int productId;
    char name[50];
    float price;
    int quantity;
} Product;

void addInventory(FILE *file) {
    Product newProduct;

    printf("Enter Product ID: ");
    scanf("%d", &newProduct.productId);

    printf("Enter Product Name: ");
    scanf("%s", newProduct.name);

    printf("Enter Product Price: ");
    scanf("%f", &newProduct.price);

    printf("Enter Product Quantity: ");
    scanf("%d", &newProduct.quantity);

    fseek(file, 0, SEEK_END);
    fwrite(&newProduct, sizeof(Product), 1, file);

    printf("Product added to inventory.\n");
}

void appendData(FILE *file, int productId) {
    Product product;

    while (fread(&product, sizeof(Product), 1, file) == 1) {
        if (product.productId == productId) {
            // Found the product, allow the user to append data
            printf("Enter additional information for product (ID: %d):\n", productId);

            // Example: appending additional quantity
            printf("Enter additional quantity: ");
            int additionalQuantity;
            scanf("%d", &additionalQuantity);

            product.quantity += additionalQuantity;

            fseek(file, -sizeof(Product), SEEK_CUR);
            fwrite(&product, sizeof(Product), 1, file);

            printf("Data appended successfully.\n");
            return;
        }
    }

    printf("Product not found with ID: %d\n", productId);
}

void removeData(FILE *file, int productId) {
    FILE *tempFile = fopen("tempfile.bin", "wb+");
    if (tempFile == NULL) {
        perror("Error creating temporary file");
        exit(EXIT_FAILURE);
    }

    Product product;

    fseek(file, 0, SEEK_SET);
    while (fread(&product, sizeof(Product), 1, file) == 1) {
        if (product.productId == productId) {
            // Product found, skip writing to temp file (remove it)
            printf("Product removed successfully.\n");
        } else {
            // Product not the one to be removed, write to temp file
            fwrite(&product, sizeof(Product), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("inventory.bin");
    rename("tempfile.bin", "inventory.bin");

    file = fopen("inventory.bin", "rb+");
}

void searchData(FILE *file, char initialChar) {
    Product product;

    fseek(file, 0, SEEK_SET);
    while (fread(&product, sizeof(Product), 1, file) == 1) {
        if (product.name[0] == initialChar) {
            // Display product details
            printf("Product ID: %d\n", product.productId);
            printf("Product Name: %s\n", product.name);
            printf("Product Price: %.2f\n", product.price);
            printf("Product Quantity: %d\n", product.quantity);
            printf("-----------------------------\n");
        }
    }
}

int main() {
    FILE *file = fopen("inventory.bin", "wb+");
    if (file == NULL) {
        perror("Error opening inventory file");
        return EXIT_FAILURE;
    }

    int choice;
    int productId;

    do {
        printf("1. Add Inventory\n");
        printf("2. Append Data\n");
        printf("3. Remove Data\n");
        printf("4. Search Data\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addInventory(file);
                break;
            case 2:
                printf("Enter Product ID to append data: ");
                scanf("%d", &productId);
                appendData(file, productId);
                break;
            case 3:
                printf("Enter Product ID to remove data: ");
                scanf("%d", &productId);
                removeData(file, productId);
                break;
            case 4:
                printf("Enter initial character to search: ");
                char initialChar;
                scanf(" %c", &initialChar); // Using a space before %c to consume the newline character from previous input
                searchData(file, initialChar);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    fclose(file);
    return 0;
}

