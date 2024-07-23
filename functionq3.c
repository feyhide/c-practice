#include<stdio.h>

int sum(int x, int y){
    return x + y;
}

int main(){
    int a, b;

    printf("Enter your First Number : \n");
    scanf("%d", &a);
    printf("Enter your Second Number : \n");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum is : %d", s);
    return 0;
}

