#include<stdio.h>

int main(){

    int l,b;
    printf("Length ");
    scanf("%d", &l);
    printf("Breadth ");
    scanf("%d", &b);
    for (int i = 1; i <= l; i++) // LENGTH
    {
        for (int j = 1; j <= b; j++) // BREADTH
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}