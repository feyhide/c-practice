#include<stdio.h>
typedef int* pointer;
int main(){
    int x = 1;
    pointer p = &x;
    printf("%p",p);
    return 0;
}