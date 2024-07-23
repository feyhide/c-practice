#include <stdio.h>
int main()
{
    int marks;
    printf("marks: ");
    scanf("%d", &marks);

    if(marks > 30){
        printf("pass\n");
    }
    else{
        printf("fail\n");
    }
    return 0;
}