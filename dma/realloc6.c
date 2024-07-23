#include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr = (int **)malloc(sizeof(int *));
    int i, j;

    for (j = 0; ; j++) {
        arr[j] = (int *)malloc(sizeof(int));
        for (i = 0; ; i++) {
            scanf("%d", &arr[j][i]);
            if (arr[j][i] < 0 || arr[j][i] == 2) {
                break;
            }
            arr[j] = realloc(arr[j], sizeof(int) * (i + 2));
        }
        if (arr[j][i] == 2) {
            break;
        }
        arr = realloc(arr, sizeof(int *) * (j + 2));
    }

    // Print the array
    for (int row = 0; row < j + 1; row++) {
        int col = 0;
        while (arr[row][col] != 2 && arr[row][col] != -1) {
            printf("%d ", arr[row][col]);
            col++;
        }
        printf("\n");
        free(arr[row]); // Free memory for each row
    }

    free(arr); // Free the array

    return 0;
}

