#include <stdio.h>

int main(){
    char grade;
    
    printf("Your Grade :");
    scanf("%s", &grade);

    switch(grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did okay!");
        break;
    case 'C':
        printf("You did poor!");
        break;
    case 'F':
        printf("You failed!");
        break;    
    default:
        printf("Invalid Character");
    }
    return 0;
}