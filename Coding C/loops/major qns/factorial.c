#include<stdio.h>
int main (){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int fact=1;
    while(n>0) {
        
        fact=fact*n;
        n=n-1;
    }
    
    printf("The factorial is %d",fact);
    return 0;
}