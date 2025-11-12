#include<stdio.h>
int factorial(int x){
    if(x==0) return 1; //base case
    int recans= x*factorial(x-1);
    return recans;
}
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int answer= factorial(n);
    printf("Factorial is: %d",answer);
    return 0;
}