#include <stdio.h>

int main(){

    double num1;
    double num2;
    char op;

    printf("Enter First Number :");
    scanf("%lf", &num1);
    printf("Enter Operator :");
    scanf(" %c", &op);
    printf("Enter Second Number :");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    } else if(op == '-'){
        printf("%f", num1 - num2);
    }else if(op == '/'){
        printf("%f", num1 / num2);
    }else if(op == '*'){
        printf("%f", num1 * num2);
    }else{
        printf("Invalid Operator");
    }
    
    return 0;
}