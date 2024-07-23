#include<stdio.h>

int powerlog(int a,int b){
    if(b==0) return 1;
    int x = powerlog(a,b/2); 
    if (b%2==0) 
        return x*x;
    else
        return x*x*a;
}
int main(){
    int a,b;
    printf("enter a number and power");
    scanf("%d %d",&a,&b);
    int pow = powerlog(a,b);
    printf("%d",pow);
    return 0;
}