#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("ENTER THE SIZE OF AN ARRAY  ");
    scanf("%d",&n);
    int* ptr = (int*) malloc (n*sizeof(int));
    ptr = realloc(ptr,10*sizeof(int));//add 10 more to the prev   
    return 0;
}