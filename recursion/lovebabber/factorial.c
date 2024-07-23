#include<stdio.h>

int recursion(int n){
    printf("araha hai : (%d)\n",n);
    if(n==0){
        return 1;
    }
    return n*recursion(n-1);
}
int main(){
    recursion(5);
    return 0;
}