#include<stdio.h>
#include<string.h>

int main(){
    struct pokemon{
        int hp;
        int speed;
        char name[50];
    };
    // struct pokemon pikachu;
    // pikachu.hp=10;
    // pikachu.speed=9;
    // strcpy(pikachu.name,"PIKACHU");

    struct pokemon pokarr[100];
    int n;
    printf("Enter no of pokemon: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Name: ");
        scanf("%s",pokarr[i].name);
        printf("Attack: ");
        scanf("%d",&pokarr[i].hp);
    }
    printf("----------------\n");
    for(int i=0;i<n;i++){
        printf("Name:%s",pokarr[i].name);
        printf("\nAttack:%d\n",pokarr[i].hp);
        
    }
    return 0;
}