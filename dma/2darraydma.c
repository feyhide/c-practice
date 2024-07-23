#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    int **ptr = (int**)malloc(5*sizeof(int*));//10 will be size of i like 10 row 1cols
    
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = (int*)malloc(3*sizeof(int));
        for (int j = 0; j < 3 ; j++)
        {
            printf("\n%d\nchange value of row %d\n",ptr[i][j],i+1);
            scanf("%d",&ptr[i][j]);
        }
    }
    
    printf("\nchanged\n");
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}