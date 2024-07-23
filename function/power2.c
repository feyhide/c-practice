#include<stdio.h>
#include<math.h>
int power(int a, int b){
    return pow(a,b);
}

int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    float pow = power(a,b);
    printf("power is %.0f", pow);
    return 0;
}