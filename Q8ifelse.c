#include<stdio.h>

int main(){
    char ch;
    printf("Character:");
    scanf("%c",&ch);

    if (ch>='a' && ch <= 'z'){
        printf("lower case");
    }
    else if(ch>='A' && ch <= 'Z'){
        printf("upper case");
    }
    else{
        printf("Wrong input");
    }
    return 0;
}