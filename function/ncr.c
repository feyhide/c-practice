#include<stdio.h>

int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact*i;
    }
    return fact;
    
}
int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n,r;
    printf("enter n and r");
    scanf("%d %d", &n,&r);
    int ncr = combination(n,r);
    printf("NCR IS %d",ncr);
    return 0;
}