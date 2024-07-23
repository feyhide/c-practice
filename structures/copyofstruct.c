#include<stdio.h>
#include<string.h>

int main(){
    struct pokemon
    {
        int hp;
        char power[20];
        int position;
    }peepee,sheeshee,shuka;

    // or struct pokemon sheeshee; to declare

    peepee.hp = 1;
    peepee.position = -2;
    strcpy(peepee.power,"UWU");

    sheeshee = peepee;
    
    strcpy(sheeshee.power,"WU");

    printf("%d\n",sheeshee.hp);   
    printf("%s\n",sheeshee.power);
    printf("%d\n",sheeshee.position);
    return 0;
}