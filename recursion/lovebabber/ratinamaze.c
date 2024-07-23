#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char path[100][100];
int i = 0, j = 0;

bool confirmpath(int x, int y, int arr[5][5], int res[5][5]) {
    if (x >= 0 && x < 5 && y >= 0 && y < 5 && arr[x][y] == 1 && res[x][y] == 0) {
        return true;
    } else {
        return false;
    }
}

void checkpath(int arr[5][5], int res[5][5], int x, int y) {
    if (x == 4 && y == 4) {
        path[i][j] = '\0';  // Null-terminate the string
        printf("%s\n", path[i++]);
        strcpy(path[i],path[i-1]);
        return;
    }
    res[x][y] = 1;

    // down
    int newx = x + 1, newy = y;
    if (confirmpath(newx, newy, arr, res)) {
        path[i][j++] = 'D';
        checkpath(arr, res, newx, newy);
        j--;  // Backtrack: reset j
    }

    // left
    newx = x, newy = y - 1;
    if (confirmpath(newx, newy, arr, res)) {
        path[i][j++] = 'L';
        checkpath(arr, res, newx, newy);
        j--;  // Backtrack: reset j
    }

    // right
    newx = x, newy = y + 1;
    if (confirmpath(newx, newy, arr, res)) {
        path[i][j++] = 'R';
        checkpath(arr, res, newx, newy);
        j--;  // Backtrack: reset j
    }

    // up
    newx = x - 1, newy = y;
    if (confirmpath(newx, newy, arr, res)) {
        path[i][j++] = 'U';
        checkpath(arr, res, newx, newy);
        j--;  // Backtrack: reset j
    }
    res[x][y] = 0;
}

int main() {
    int arr[5][5] = {{1, 0, 0, 0, 0},
                     {1, 1, 1, 1, 0},
                     {0, 1, 0, 1, 0},
                     {1, 1, 1, 1, 1},
                     {0, 1, 0, 1, 1}};
    int res[5][5] = {{0}};
    checkpath(arr, res, 0, 0);
    return 0;
}
