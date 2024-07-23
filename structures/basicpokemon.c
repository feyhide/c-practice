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

    printf("%d\n",peepee.hp);   
    printf("%s\n",peepee.power);
    printf("%d\n",peepee.position);
    return 0;
}