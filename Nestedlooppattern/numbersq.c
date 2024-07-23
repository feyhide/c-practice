#include<stdio.h>

int main(){

    int s;
    printf("size ");
    scanf("%d", &s);

    for (int i = 1; i <= s; i++) // LENGTH
    {
        for (int j = 1; j <= s; j++) // BREADTH
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}