#include <stdio.h>
int main()
{
    int number;
    printf("Number :");
    scanf("%d", &number);

    printf("%d", number>9 && number<100);

    return 0;
}