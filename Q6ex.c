#include<stdio.h>

int main(){
    int marks;
    printf("Marks:");
    scanf("%d",&marks);

    // TENERY OP
    marks > 33 ? printf("pass") : printf("fail");
    return 0;

}