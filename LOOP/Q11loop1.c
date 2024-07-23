#include <stdio.h>

int main(){
    int n,sum=0;
    printf("enter number :");
    scanf("%d",&n);

    for (int i = 1, j = n; i <= n && j > 0; i++, j--)
    {
        sum += i;
        printf("%d\n", j);
    }
    printf("sum is %d\n", sum);
    
    return 0;
}