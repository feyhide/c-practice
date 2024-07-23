#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("ENTER THE SIZE OF AN ARRAY  ");
    scanf("%d",&n);
    int* ptr = (int*) malloc (n*sizeof(int));
    int* p = ptr; // to store the first position 
    free(p); // to free the space allocated use the first position
    free(ptr); // this will create a problem
    ptr = NULL;
    
    return 0;
}