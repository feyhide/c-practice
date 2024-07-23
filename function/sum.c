#include<stdio.h>

void sum(int a, int b){
    printf("sum is %d",a+b);
    return;
}

int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    sum(a,b);
    return 0;
}