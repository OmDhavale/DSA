#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int fact(int);
    printf("The factorial of the number is: %d",fact(n));
    return 0;
}
int fact(int n){
    if(n==1){return 1;}
    else{return n*fact(n-1);}
}