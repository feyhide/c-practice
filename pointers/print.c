#include<stdio.h>

int main(){
    int a = 5;
    printf("%p\n",&a); // a ka address

    int* x = &a;    // int* float* double* inmein address store hoti hai
    printf("%p\n",x); // a ka address
    // another way of doing the above
    int* y;
    y = &a;
    printf("%p\n",y); // a ka address

    // address %d se print nhi hote 

    printf("%p\n",x); // a ka address
    printf("%p\n",&x); // x ka address
    printf("%d\n",*x); // x ke ander jo address hai uski value

    return 0;
}