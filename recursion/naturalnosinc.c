#include<stdio.h>

int print(int s,int i){
    printf("%d\n",i);
    if(i==s) return i;
    i++;
    print(s,i);
}
int main(){
    int s,i=1;
    printf("enter a number");
    scanf("%d",&s);
    print(s,i);
    return 0;
}