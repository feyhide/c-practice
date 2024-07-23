#include<stdio.h>

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }
    int pivotindex = s + count;

    int temp = arr[pivotindex];
    arr[pivotindex] = arr[s];
    arr[s] = temp;
    int i = s, j = e;
    while (i < pivotindex && j > pivotindex) {
        while (arr[i] <= arr[pivotindex]) {
            i++;
        }
        while (arr[j] >= arr[pivotindex]) {
            j--;
        }
        if (i < pivotindex && j > pivotindex) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        i++;j--;
    }
    return pivotindex;
}

void printbhikarden(int arr[], int l) {
    for (int i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quicksort(int arr[], int s, int e) {
    if (s >= e) {
        return;
    }
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e); // Fix here: Change arr, p, e instead of arr, p, e
}

int main() {
    int arr[] = {1,5,2,3,7};
    int n = 5;
    quicksort(arr, 0, n - 1);
    printbhikarden(arr, n);
    return 0;
}
