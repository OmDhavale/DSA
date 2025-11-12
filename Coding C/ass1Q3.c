#include<stdio.h>
int factorial(int n){
    int prod=1;
    while(n>0){
        prod=prod*n;
        n--;
    }
    return prod;
}
int main(){
    int n,i;
    float sum=0.0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    
    while(n>0){
        int fact= factorial(n);
        sum = 1/fact + sum;
        n--;
    }
    printf("%f",sum);
    return 0;
}