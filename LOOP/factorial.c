#include<stdio.h>

/*    int main(){
    int product = 1;
    for (int i = 1; i <= 5; i++)
        {
            product = product*i;
        }
    printf("factorial %d", product);
        
    return 0;
}*/
int main(){
    int n,product=1;
    printf("number ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
        printf("factorial of %d is %d\n", i,product);
    }
    
    return 0;

}