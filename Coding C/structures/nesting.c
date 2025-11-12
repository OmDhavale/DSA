#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon {
        int attack;
        char name[100];
    }pokemon;

    typedef struct specialpokemon{
        pokemon normal;
        int specialattack; 
    }specialpokemon;

    typedef struct legendpokemon{
        specialpokemon special;
        char legendpower[100];
    }legendpokemon;

    pokemon pikachu;
    pikachu.attack=10;
    strcpy(pikachu.name,"Pikachu");

    legendpokemon megacharizard;
    strcpy(megacharizard.legendpower,"Flameball");
    megacharizard.special.specialattack = 89;
    megacharizard.special.normal.attack= 99;
 return 0;
}