#include<stdio.h>
int main(){
    struct cricket{
        char name[50];
        int age;
        int noofmatches;
        float runs;
    };
    struct cricket array[200];
    for(int i=0;i<2;i++){
        printf("Enter name of cricketer: ");
        scanf("%s",array[i].name);
        printf("Enter Age, No of matches, Runs: ");
        scanf("%d %d %f",&array[i].age,&array[i].noofmatches,&array[i].runs);

    }
    for(int i=0;i<2;i++){
        printf("%s\n%d\n%d\n%f",array[i].name,array[i].age,array[i].noofmatches,array[i].runs);

    }
    return 0;
}