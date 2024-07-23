#include<stdio.h>

int main(){

    int s;
    printf("size ");
    scanf("%d", &s);

    for (int i = 1; i <= s; i++) // size
    {
        for (int j = 1; j < 5; j--)
        { 
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}

// why j <= s+1 - i??
// if you look into the pattern 
// **** i=1 j=4   i=1 j=4(given by user) i+j=5 always or j=5-i (itna print karwana hai)
// ***  i=2 j=3   where 5 is s(given)+1  
// **   i=3 j=2   so j = s+1 - i (j = 4+1 - 1 = 4 , j = 4+1 - 2 = 3.....)
// *    i=4 j=1