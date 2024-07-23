#include <stdio.h>

int main(){
    int n,sum=0;
    printf("enter number :");
    scanf("%d",&n);

    for (int j = n; j > 0; j--)
    {
        sum += j;
        printf("%d\n", j);
    }
    printf("sum is %d\n", sum);
    
    return 0;
}