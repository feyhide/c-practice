#include<stdio.h>

void print(int s){
    printf("%d\n",s);
    if(s==1) return;
    print(s-1);
    return;
}
int main(){
    int s;
    printf("enter a number");
    scanf("%d",&s);
    print(s);
    return 0;
}