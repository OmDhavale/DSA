#include<stdio.h>
int factorial(int n){
    int fact=1;
    while(n!=0){
        fact=fact*n;
        n--;
    }
    
    return fact;
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    
    printf("%d",factorial(n));
    return 0;

}