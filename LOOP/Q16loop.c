#include<stdio.h>
int main(){
   
    int n,multiply=1;
    printf("insert number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        multiply= multiply*i;
    }
    printf("Factorial is = %d", multiply);
    return 0;
    
    
}       