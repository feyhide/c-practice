#include<stdio.h>

int main(){
    int n;
    printf("size ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        int a = 65;
        for (int k = 1; k <= i; k++)  //odd no Tn 1,3,5,7.... a=1 d=2   a+(n-1)d == 1+(n-1)2 == 1+2n-2 == 2n-1
        {
            printf("%c",(char)a);
            a++;
        }
        int b = a-2; // 1st loop mein A B per loop close, 2nd mein A B Cper loop close means second forloop mein humain 2 times peeche hona hoga then backward 
        for (int l = 1; l <= i-1; l++) //i - 1 islye ke start mein i = 1 to ye print nhi hua then phir ye start hua
        {
            printf("%c",(char)b);
            b--;
        }
        
        printf("\n");

    }
    
    return 0;
}