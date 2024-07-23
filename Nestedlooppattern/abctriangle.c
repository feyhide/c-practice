#include<stdio.h>

int main(){
    int n;
    printf("size ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        int a = 65;
        for (int k = 1; k <= 2*i - 1; k++)  //odd no Tn 1,3,5,7.... a=1 d=2   a+(n-1)d == 1+(n-1)2 == 1+2n-2 == 2n-1
        {
            printf("%c", (char)a);
            a++;
        }
        printf("\n");

    }
    
    return 0;
}