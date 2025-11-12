#include<stdio.h>
int main(){
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    if(x>=0&&x<=10){
        printf("x^2+2=%d",x*x+2);
    }
    if(x>10&&x<=20){
        printf("x^2+2x=%d",x*x+2*x);
    }
    if(x>20&&x<=30){
        printf("x^3+2x^2=%d",x*x*x+2*x);
    }
    if(x>30){
        printf("%d",x=0);
    }
    return 0;
}