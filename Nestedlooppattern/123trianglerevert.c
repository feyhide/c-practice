#include<stdio.h>

int main(){
    int n;
    printf("size ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = i-1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)  //odd no Tn 1,3,5,7.... a=1 d=2   a+(n-1)d == 1+(n-1)2 == 1+2n-2 == 2n-1
        {
            printf("%d",k);
        }
        for (int l = 1; l <= i-1; l++) //i - 1 islye ke start mein i = 1 to ye print nhi hua then phir ye start hua
        {
            printf("%d",a); // print a horaha hai a = i-1 then aage or minus horaha thats why backwards
            a--;
        }
        
        printf("\n");

    }
    
    return 0;
}