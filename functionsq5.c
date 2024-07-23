#include<stdio.h>

float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(float length, float breadth);

int main(){
    
    int side,radius,length,breadth,ch;

    printf("which type of area you want : c for circle, r for rectangle, s for square ?\n");
    scanf("%s", &ch);

    if(ch=='s'){
        printf("enter side :");
        scanf("%s", &side);
        areaSquare(side);
    }

    return 0;
}

float areaSquare(float side)
{
    printf("Area of the square is : %f", side*side);
    return ;
}

float areaRectangle(float l,float b)
{
    printf("Area of the rectangle : %f", l*b);
    return 0.0;
}

float areaCircle(float r)
{
    printf("Area of the circle is : %f", 3.14*r*r);    
    return 0.0;
}
