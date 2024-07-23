#include<stdio.h>

void printNamaste();
void printBonjour();
int main(){
    printf("press i for indian and f for french ??\n");
    char ch;
    scanf("%s",&ch);

    if (ch == 'i'){
        printNamaste();
    }else{
        printBonjour();
    }

    return 0;
}

void printNamaste(){
    printf("NAMASTE\n");
}
void printBonjour(){
    printf("Bonjour\n");
}