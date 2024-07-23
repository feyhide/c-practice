#include <stdio.h>

int main(){
    int n,sum=0;
    printf("enter number :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum is %d\n", sum);
    
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}