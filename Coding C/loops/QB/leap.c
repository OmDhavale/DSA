#include<stdio.h>
int main (){
    int a;
    printf("Year taka: ");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0){printf("Leap year");}
    else if(a%4==0 && a%100==0 && a%400==0) {printf("Leap year");}
    else printf("Not leap year");
    return 0;
}