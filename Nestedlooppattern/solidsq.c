#include<stdio.h>

int main(){

    int size;
    printf("size ");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++) // LENGTH
    {
        for (int j = 1; j <= size; j++) // BREADTH
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}