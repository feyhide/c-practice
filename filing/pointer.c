#include<stdio.h>
void pointer(int *a){
    (*a)++;
}
int main(){
    int a=3;
    pointer(&a);
    printf("%d",a);
    return 0;
}