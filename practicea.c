#include<stdio.h>

int main()
{
    int width,length;
    printf("what is the width and length of rectangle : ");
    scanf("%d %d", &width, &length);

    printf("Perimeter of the rectangle is : %d", 2*(width+length));
    return 0;
}