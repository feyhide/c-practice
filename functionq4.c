#include<stdio.h>

int table(int n);
int main(){
    int n;
    printf("which no table you want ??");
    scanf("%d", &n);
    
    table(n); // arguments /actual parameter

    return 0;
}

int table(int n)  // parameters / formal parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", n*i);
    }
}
