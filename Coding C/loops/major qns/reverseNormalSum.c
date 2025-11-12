#include<stdio.h>
int main () {
    int n,ld,sum;
    printf("Enter any number: ");
    scanf("%d",&n);

    while(n!=0) {
        ld=n%10;
        printf("%d",ld);
        n/10;
    }
    scanf("%d",ld);
    sum=n+ld;
    printf("The sum is: ",sum);
    return 0;
    }