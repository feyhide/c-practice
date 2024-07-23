#include <stdio.h>

void generateSubsets(int arr[], int subset[], int index, int n, int allSubsets[][10], int* subsetCount) {
    if (index == n) {
        // Save the subset
        for (int i = 0; i < n; i++) {
            allSubsets[*subsetCount][i] = subset[i];
        }
        (*subsetCount)++;
        return;
    }

    // Include the current element in the subset
    subset[index] = 1;
    generateSubsets(arr, subset, index + 1, n, allSubsets, subsetCount);

    // Exclude the current element from the subset
    subset[index] = 0;
    generateSubsets(arr, subset, index + 1, n, allSubsets, subsetCount);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // A temporary array to store the subset
    int subset[n];

    // 2D array to store all subsets
    int allSubsets[8][10];  // Assuming a maximum of 8 subsets and a maximum of 10 elements in each subset
    int subsetCount = 0;

    printf("All subsets of the array are:\n");
    generateSubsets(arr, subset, 0, n, allSubsets, &subsetCount);

    // Print all subsets
    for (int i = 0; i < subsetCount; i++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            if (allSubsets[i][j] == 1) {
                printf("%d ", arr[j]);
            }
        }
        printf("}\n");
    }

    return 0;
}
