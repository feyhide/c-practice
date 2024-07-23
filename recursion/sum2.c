#include<stdio.h>

int sum(int s){
    if(s==1||s==0) return s;
    return s+sum(s-1);
}

int main(){
    int s;
    printf("enter a number");
    scanf("%d",&s);
    int add = sum(s);
    printf("%d",add);
    return 0;
}
