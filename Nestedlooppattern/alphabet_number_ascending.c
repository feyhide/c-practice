#include<stdio.h>

int main(){

    int size;
    printf("size ");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++) // LENGTH
    {
        if (i%2==0)
        {
            int a = 65;
            for (int j = 1; j <= i; j++) // BREADTH
            {
                printf("%c", (char)a);
                a++;
            }
        }else
        {
            for (int j = 1; j <= i; j++) // j 1 se i tak 
            {
                printf("%d",j);
            }
        }    
        printf("\n");
    }
    
    return 0;
}