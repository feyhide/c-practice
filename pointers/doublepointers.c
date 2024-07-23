#include<stdio.h>

int main(){
    int a = 5;
    int* x = &a;
    int** y = &x;
    int*** z = &y;

    printf("%d",a);
    printf("%d",*x);
    printf("%d",**y);
    printf("%d",***z);
    return 0;
}