#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon
    {
        int hp;
        int position;
    }pokemon;

    typedef struct legendarypokemon
    {
        int hoop;
    }legendarypokemon;

    struct godpokemon
    {
        pokemon normal;
        legendarypokemon allprev;
        int charm;
    }fahad;


    fahad.charm = 111;
    fahad.allprev.hoop = 1;
    fahad.normal.hp = 1011;
    fahad.normal.position = -1;

    printf("%d\n%d\n%d\n%d\n",fahad.charm,fahad.allprev.hoop,fahad.normal.hp,fahad.normal.position);
    

    
    return 0;
}