#include <stdio.h>
#include <math.h>

int main()
{
    int number,power;
    printf("Whats your number : ");
    scanf("%d", &number);

    printf("whats your power : ");
    scanf("%d", &power);
    
    printf("THATS YOUR CUBE : %f", pow(number,power));
    return 0;
}