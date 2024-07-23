#include<stdio.h>
#include<stdlib.h>

int main(){
    int* ptr = (int*)malloc(5*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        ptr[i]=i;
        printf("%d ",ptr[i]);
    }
    realloc(ptr,sizeof(int)*10);
    printf("\nchanged\n");
    for (int i = 5; i < 10; i++)
    {
        ptr[i]=i;
        printf("%d ",ptr[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i]=i;
        printf("%d ",ptr[i]);
    }
    return 0;
}