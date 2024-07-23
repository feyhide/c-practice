#include<stdio.h>

int main(){
    int n,i,sum=0;
    printf("n:");
    scanf("%d", &n);

    i = 0;
    while (n != 0)
    {
        int lastDigit = n%10;
        if (lastDigit%2 == 0)
        {
            sum += lastDigit;
        }
        n = n/10;
        i++;
    }    
    printf("%d", sum);
    return 0;
}