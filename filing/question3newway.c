#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int productId;
    char name[50];
    float price;
    int quantity;
} Product;

void addInventory(FILE *file,int *count) {
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
	(*count)++;
}

void appendData(FILE *file, int productid,int *count) {
    
	Product product[(*count)];
    int additionalq,flag=1;
    printf("%d\n",(*count)-1);
    fseek(file, 0, SEEK_SET);
	fread(&product,sizeof(Product),(*count),file);
	printf("%d\n",product[(*count)-1].productId);
	for(int i = 0;i < (*count);i++){
		printf("%d\n",product[i].productId);
		if(product[i].productId==productid){
			printf("ADD NEW QUANTITY\n");
			scanf("%d",&additionalq);
			product[i].quantity+=additionalq;
			printf("appended");
			flag=0;
		}
		if(flag==1){
			printf("PRODUCT NOT FOUND");
		}
	}
	
	for(int i = 0;i<(*count);i++){
		printf("%d %s %0.2f %d\n",product[i].productId,product[i].name,product[i].price,product[i].quantity);
	}
	
    FILE *file2 = fopen("temp.bin", "wb+");
    if (file2 == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < (*count); i++) {
        fwrite(&product[i], sizeof(Product), 1, file2);
    }

    fclose(file);
    fclose(file2);
    
    remove("inventory.bin");
    rename("temp.bin", "inventory.bin");
    
    file = fopen("inventory.bin", "rb+");
}

void removeData(FILE *file, int productId,int *count) {
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
            (*count)--;
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
	int count = 0;
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
                addInventory(file,&count);
                break;
            case 2:
                printf("Enter Product ID to append data: ");
                scanf("%d", &productId);
                appendData(file, productId,&count);
                break;
            case 3:
                printf("Enter Product ID to remove data: ");
                scanf("%d", &productId);
                removeData(file, productId,&count);
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

