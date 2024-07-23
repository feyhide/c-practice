#include <stdio.h>

int main()
{
    double num1;
    double num2;
    printf("First Number : ");
    scanf("%lf", &num1);
    printf("Second Number : ");
    scanf("%lf", &num2);
    printf("Your Addition Is : %f", num1 + num2);
    return 0;    
}