#include<stdio.h>
int main () {
    int ld,n,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    while (n!=0) {
        ld=n%10; //ld= last digit
        sum = sum + ld ;
        n=n/10;
    }
    printf("The sum of digits of number is %d",sum);
    return 0;
}