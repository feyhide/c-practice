#include<stdio.h>

int main(){

    int s;
    printf("size ");
    scanf("%d", &s);
    int breadth = s;
    for (int i = 1; i <= s; i++) // size
    {
        for (int j = 1; j <= breadth; j++) // j from 1 to n (n ko har baar decrease)
        { 
            printf("%d",j);
        }
        printf("\n");
        breadth--;
    }
    
    return 0;
}