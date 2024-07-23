#include<stdio.h>

int main(){
    int n;
    printf("n??\n");
    scanf("%d", &n);

    for (int i = 2; i <= n-1; i++)
    { 
        if(n%i!= 0){
            printf("primeno");
            break;
        }else{
            printf("composite");
            break;
        }
    }
    if(n<=2){
        if(n==1){
            printf("neither");
        }else{
            printf("prime");
        }
    }
    return 0;
}