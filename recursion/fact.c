#include<stdio.h>

int factorial(int n){
    if(n==1||n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    int s;
    printf("enter a number");
    scanf("%d",&s);
    int fact = factorial(s);
    printf("%d",fact);
    return 0;
}