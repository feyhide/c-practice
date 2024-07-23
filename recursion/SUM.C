#include<stdio.h>

void print(int s,int i){
    if(s!=0){
        print(s-1,i+s);
    }else{
        printf("%d",i);
        return;
    }
}
int main(){
    int s,i=0;
    printf("enter a number");
    scanf("%d",&s);
    print(s,i);
    return 0;
}