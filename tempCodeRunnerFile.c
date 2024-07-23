#include<stdio.h>

int main(){
    int n=5, sum=0;
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            sum -= i;
        }else
        {
            sum += i;
        }   
    }
    printf("sum %d", sum);
    
    return 0;
}