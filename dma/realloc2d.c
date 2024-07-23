#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    int **ptr = (int**)malloc(2*sizeof(int*));
    
    for (i = 0; i < 2; i++)
    {
        ptr[i] = (int*)malloc(2*sizeof(int));
        for (int j = 0; j < 2 ; j++)
        {
            printf("\n%d\nchange value of row %d\n",ptr[i][j],i+1);
            scanf("%d",&ptr[i][j]);
        }
    }
    ptr = realloc(ptr,3*sizeof(int*));
    for (i = 0; i < 3; i++)
    {
        ptr[i] = realloc(ptr[i],3*sizeof(int));
        if(i!=2){
            for (int j = 2; j < 3 ; j++)
            {
                printf("\n%d\nchange value of row %d\n",ptr[i][j],i+1);
                scanf("%d",&ptr[i][j]);
            }
        }else{
            for (int j = 0; j < 3 ; j++)
            {
            printf("\n%d\nchange value of row %d\n",ptr[i][j],i+1);
            scanf("%d",&ptr[i][j]);
            }
        }

    }
    printf("\nchanged\n");
    
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
