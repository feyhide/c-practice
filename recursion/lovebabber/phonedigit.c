#include <stdio.h>
#include <string.h>

char arrchar[][10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void solve(char arr[], int s, int e, char result[], int newarr[]) {
    if (s > e) {
        result[s] = '\0';  // Add null terminator to form a valid string
        printf("%s\n", result);
        return;
    }

    int number = arr[s] - '0';
    char value[5];
    strcpy(value, arrchar[number]);
    int l = strlen(value);

    for (int i = 0; i < l; i++) {
        result[s] = value[i];
        solve(arr, s + 1, e, result, newarr);
    }
}

int main() {
    int newarr[10];
    char arr[] = "23";
    char result[3];  // Assuming maximum length is 3 (as per your example)
    solve(arr, 0, strlen(arr) - 1, result, newarr);
    return 0;
}
