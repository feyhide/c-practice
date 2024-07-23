#include<stdio.h>

int main(){
    int n,i;
    printf("n:");
    scanf("%d", &n);

    i = 0;
    while (n != 0)
    {
        n = n/10;
        i++;
    }    
    printf("%d", i);
    return 0;
}