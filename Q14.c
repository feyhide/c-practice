#include<stdio.h>
int main(){
    int n;

    do
    {
        printf("Number : ");
        scanf("%d", &n);
        printf("%d\n", n);
        
        if ( n % 7 == 0)
        {
            break;
        }
    } while (1);
    printf("thanks for the 7 multiple");
    return 0;   
}