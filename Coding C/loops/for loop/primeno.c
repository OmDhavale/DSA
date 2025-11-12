#include<stdio.h>
int main () {
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int a=0;
    for (int i=2;i<=n-1;i++) {
        if(n%i==0) {a=1;}
        break;
    }
    if (n==1) {printf("The number is neither composite nor prime");}
    else if (a==0) {printf("The number is prime");}
    else {printf("The number is composite");}
    
   
    return 0;
}