#include<stdio.h>

int main(){
    int n;
    printf("Tn??\n");
    scanf("%d", &n);
    int a=2;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a *=4;
    }
    
    return 0;
}