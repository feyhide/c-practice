#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n=10;
    int* ptr = (int*) malloc (n*sizeof(int));
    int* p = ptr;
    int* x = ptr;// to store the first position of ptr
    for (i=0;i<10;i++){
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\nEnter 10 Elements\n");
    for (i = 0; i < n; i++){
        scanf("%d",&(*p));    // to change the garbage value in ptr which contains an address so *ptr will change the value of the address inside
        p++;
    }
    printf("\n");
    for (i = 0; i < n; i++){
        if ((*x)%2!=0){
            (*x)--;
        }
        printf("%d ",*x); //print from the first position to n
        x++;
    }
    
    return 0;
}