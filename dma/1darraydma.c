#include<stdio.h>
#include<stdlib.h>

int main(){
    int* ptr = (int*)malloc(10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d\nchange value\n",*(ptr+i));
        scanf("%d",&(*(ptr+i)));
    }
    printf("\nchanged\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}