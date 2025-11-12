#include<stdio.h>

int main() {
    float a,b;
    printf("enter value of a: ");
    scanf("%f",&a);

    printf("enter value of b: ");
    scanf("%f",&b);

    printf("\n  sum is : %f\n",a+b);
    printf("difference is : %f\n", a-b);
    printf(" product is %f\n", a*b);
    printf("division is : %f", a/b);
   
    return 0;
}