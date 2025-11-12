#include<stdio.h>
int main () {
    int n,ld,r=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    // while (n!=0) {
    //     ld=n%10;
    //     printf("%d",ld);
    //     n=n/10;
    // }

    while (n!=0) {
        r=r*10;
        r= r + (n%10);
        n=n/10;
    }
    printf("Reverse is %d",r);
    return 0;
}