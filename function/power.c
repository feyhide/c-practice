#include<stdio.h>
#include<math.h>
void power(int a, int b){
    printf("power is %f", pow(a,b));
    return;
}

int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    power(a,b);
    return 0;
}