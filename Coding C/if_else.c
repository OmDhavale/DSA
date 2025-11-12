#include<stdio.h>
int main (){
    int x,y;
    printf("Enter a year : ");
    scanf("%d",&x);
    if (x%4==0){
        printf("It's a leap year");
    }
    else{
        printf("It's not a leap year");
    }
    return 0;
}