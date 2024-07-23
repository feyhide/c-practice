#include<stdio.h>

int main(){
    int n,first=1,second=1,sum=1;
    printf("number ");
    scanf("%d", &n);
    if (n >= 3)
    {
        printf("your 1 is 0\nyour 2 is 1\nyour 3 is 1\n");
    }else if (n >= 2)
    {
        printf("your 1 is 0\nyour 2 is 1\n");
    }else
    {
        printf("your 1 is 0\n");
    }
    
    for (int i = 4; i <= n; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("your %d is %d\n", i,sum);
    }
    
    return 0;
}