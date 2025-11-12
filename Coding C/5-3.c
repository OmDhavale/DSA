#include<stdio.h>
int main () {
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);

    if (a%3==0 && a%5==0) {
        printf("The number %d is divisible by 3 and 5",a);
    }
    else {
        printf("The number %d is not divisble by 3 and 5",a);
    }

    return 0;
}