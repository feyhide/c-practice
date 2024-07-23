#include<stdio.h>

int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("enter a number and power");
    scanf("%d %d",&a,&b);
    int pow = power(a,b);
    printf("%d",pow);
    return 0;
}