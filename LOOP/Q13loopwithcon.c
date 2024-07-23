#include<stdio.h>
int main(){
    int n;

    do
    {
        printf("Number : ");
        scanf("%d", &n);
        printf("%d\n", n);
        
        if ( n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("thanks for the odd");
    return 0;
    
    
}