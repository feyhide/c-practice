#include<stdio.h>

int main(){
    int n=7, sum=0;
/*    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            sum -= i;
        }else
        {
            sum += i;
        }   
    }*/ // long Method

    //you can do maths and find that theres a formula for n = even or odd
    //if odd then ans is -n/2 + n 
    //if even then ans is -n/2

    if (n%2 == 0)
    {
        sum = -n/2;
    }else
    {
        sum = -n/2 + n;
    }

    printf("sum %d", sum);
    
    return 0;
}