#include<stdio.h>

int main(){
    int n;
    printf("size ");
    scanf("%d", &n);
    int ml = n/2 + 1;
    int spc = n/2;
    int str = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= str; k++)
        {
            printf("*");
        }
        if (i < ml)
        {
            spc--;
            str +=2;
        }else
        {
            spc++;
            str-=2;
        }
        
            

        printf("\n");
    }
    
    return 0;
}