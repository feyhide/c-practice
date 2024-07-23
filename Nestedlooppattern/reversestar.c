#include<stdio.h>

int main(){
    int n;
    printf("size ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n ; j--)
        {
            printf(" "); // space ki jagah * rakho for understanding
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
    
    return 0;
}