#include<stdio.h>
int main (){
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);

    if(x>=0 && x<=10) {printf("f(x)= %d",x*x+2);}
    if(x>10 && x<=20) {printf("f(x)=%d",x*x+2*x);}
    if(x>20 && x<=30) {printf("f(x)=%d",x*x*x+2*x*x);}
    if(x>30) {printf("f(x)=0");}
    return 0;
}