#include<stdio.h>
int factorial(int x){
    int fact=1;
    while(x>0){
        fact=fact*x;
        x--;
    }
}
int main (){
    int n,r;
    printf("Enter n and r: ");                      //nCr= n!/r!*(n-r)!
    scanf("%d %d",&n, &r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);

    int combi= nfact/(rfact*nrfact);
    printf("Combination nCr is: %d",combi);
    return 0;
}