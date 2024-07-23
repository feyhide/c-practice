#include<stdio.h>

int main(){
    int n,i,reverse=0,sum=0;
    printf("n:");
    scanf("%d", &n);

    i = 0;
    while (n != 0)
    {
        int lastDigit = n%10;
        sum += lastDigit;
        reverse *= 10; 
        reverse = (reverse + lastDigit);
        n = n/10;
        i++;
    }    
    printf("%d  %d", sum+reverse,reverse);
    return 0;
}