#include<stdio.h>
int main () {
    int n;
    printf("Enter any number");
    scanf("%d",&n);

    int count=0;
    
    while (n!=0) {
        n=n/10;
        count++;
    }
    printf("The digit has %d digits",count);

    return 0;
}