#include <stdio.h> 

int main(void) {
    int n,i;
    printf("Enter any number n:");
    scanf("%d", &n);

    if(n == 0 || n == 1){
        printf("%d is not a prime no", n);
    }

    for(i = 2; i <= n - 1; i++){
        if(n % i == 0){
            break;
        }    
    }

    if(i == n){
        printf("%d is a prime no", n);
    } else {
        printf("%d is not a prime no", n);
    }

    return 0;    
}