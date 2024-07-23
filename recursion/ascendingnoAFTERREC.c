#include<stdio.h>

void print(int s){
    if(s==0) return;
    print(s-1);
    printf("%d\n",s);
    return;
}
int main(){
    int s;
    printf("enter a number");
    scanf("%d",&s);
    print(s);
    return 0;
}