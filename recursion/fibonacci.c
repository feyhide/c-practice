#include<stdio.h>

int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int s;
    printf("enter a number");
    scanf("%d",&s);
    int ans = fibo(s);
    printf("%d",ans);
    return 0;
}