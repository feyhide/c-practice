#include<stdio.h>

int main(){

    int n,power,ans=1;
    printf("n ");
    scanf("%d", &n);
    printf("power ");
    scanf("%d", &power);

    for (int i = 1; i <= power; i++)
    {
        ans = ans*n;
    }
    printf("ans %d", ans);
    

    return 0;
}