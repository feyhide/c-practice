#include<stdio.h>
#include<string.h>

int main(){
    struct pokemon
    {
        int hp;
        char power[20];
        int position;
    };

    struct legendary
    {
        int binary;
        struct pokemon;
    }peepee;
    // what it does is that it added the structure 
    peepee.hp = 1;
    peepee.binary = 10101;
    peepee.position = -2;
    strcpy(peepee.power,"UWU");

    printf("%d\n",peepee.binary);   
    printf("%d\n",peepee.hp);   
    printf("%s\n",peepee.power);
    printf("%d\n",peepee.position);
    return 0;
}