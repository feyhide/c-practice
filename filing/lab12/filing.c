#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// Define a structure representing an item
struct Item {
    char name[MAX_NAME_LENGTH];
    float price;
    int quantity;
};

// Function to read an item from a file
void readItem(FILE *file, struct Item *item) {
    fscanf(file, "%s %f %d", item->name, &item->price, &item->quantity);
}

// Function to write an item to a file
void writeItem(FILE *file, const struct Item *item) {
    fprintf(file, "%s %.2f %d\n", item->name, item->price, item->quantity);
}

int main() {
    // Open a file for writing
    FILE *file = fopen("items.txt", "w");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Example: Writing items to the file
    struct Item items[] = {
        {"Milk", 2.92, 5},
        {"Bread", 1.99, 10},
        {"Eggs", 2.25, 8},
        // Add more items as needed
    };

    for (int i = 0; i < sizeof(items) / sizeof(items[0]); i++) {
        writeItem(file, &items[i]);
    }

    // Close the file
    fclose(file);

    // Open the file for reading
    file = fopen("items.txt", "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Example: Reading items from the file
    struct Item readItems[3]; // Assuming there are 3 items in the file

    for (int i = 0; i < 3; i++) {
        readItem(file, &readItems[i]);
    }

    // Display the read items
    for (int i = 0; i < 3; i++) {
        printf("Item: %s, Price: %.2f, Quantity: %d\n",
               readItems[i].name, readItems[i].price, readItems[i].quantity);
    }

    // Close the file
    fclose(file);

    return 0;
}
