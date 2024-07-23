#include<stdio.h>

int main(){

    int s;
    printf("size ");
    scanf("%d", &s);
    for (int i = 1; i <= s; i++) // size
    {
        int a = 1;
        for (int j = 1; j <= i; j++) // j 1 se i tak 
        {
            printf("%d",a);          // print a horaha hai jo baar baar +2 horaha hai means odd
            a += 2;
        }
        printf("\n");
    }
    
    return 0;
}