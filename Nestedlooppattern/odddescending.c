#include<stdio.h>

int main(){

    int s;
    printf("size ");
    scanf("%d", &s);
    for (int i = 1; i <= s; i++) // size
    {
        int a = 1;
        for (int j = 0; j < s; j--) // j = s+1 - i shows that ..,..,..,4,3,2,1 order peeche horaha 
        {
            printf("%d ",a);          // print a horaha hai jo baar baar +2 horaha hai means odd
            a += 2;
        }
        printf("\n");
    }
    
    return 0;
}