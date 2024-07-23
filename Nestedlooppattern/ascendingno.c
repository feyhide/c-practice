#include<stdio.h>

int main(){

    int s;
    printf("size ");
    scanf("%d", &s);

    for (int i = 1; i <= s; i++) // size
    {
        for (int j = 1; j <= i; j++) // j 1 se i tak 
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}