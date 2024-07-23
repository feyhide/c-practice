#include<stdio.h>

int main(){
    int marks;
    printf("Marks:");
    scanf("%d",&marks);

    marks > 33 ? printf("pass") : printf("fail");
    return 0;

}