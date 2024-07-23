#include<stdio.h>

int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact*i;
    }
    return fact;
    
}
int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n,r;
    printf("enter n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int sp = 0; sp <= n - i; sp++)
            printf(" ");

        for (int j = 0; j <= i; j++)
            printf("%d  ", combination(i, j));

        printf("\n");
    }
    return 0;
}