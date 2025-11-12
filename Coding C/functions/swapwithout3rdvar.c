#include<stdio.h>
int main (){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped number a is:%d\n",a);
    printf("Swapped number b is:%d",b);
    return 0;
}