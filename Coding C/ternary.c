#include<stdio.h>

int main() {
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);

    (a%2==0)?(printf("Even number")): (printf("Odd number"));

//condition ? statement 1 : statement 2
//if condition is true then statement 1 will be executed.. if condition is false 
// then condition 2 will be executed
    return 0;
}