#include<stdio.h>

int count = 0;

void str(char a[]) {
    if (a[count] == '\0') {
        return;
    }
    count++;
    str(a);
	count--;
    printf("%c", a[count]);
}

int main() {
    char a[] = "FAHAD";
    str(a);   
    printf("\n");

    return 0;
}

