#include<stdio.h>

int stair(int n){
    if(n<=2) return n;
    return stair(n-1)+stair(n-2);
}
int main(){
    int s;
    printf("enter a number");
    scanf("%d",&s);
    int ans = stair(s);
    printf("%d",ans);
    return 0;
}