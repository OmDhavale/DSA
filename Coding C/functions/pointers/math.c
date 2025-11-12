#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int* p = &a;
    int* q = &b;

    
    return 0;
}