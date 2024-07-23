#include<stdio.h>

int main(){
    int a = 55;
    int* x = &a;
    *x = 3;     // isme (x) jo address hai uski value ko change kardo
    printf("%d", a);
    return 0;
}