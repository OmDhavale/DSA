#include<stdio.h>
int min(int a,int b){
    if (a<b) return a;
    else return b;
}
int hcf(int a, int b){
    int gcd;                                   // ULTA LOOP (from backside)->break stmt in if is imp
    for(int i=min(a,b);i>0;i--){                // i=min number.....3,2,1.
        if(a%i==0 && b%i==0) {gcd=i;break;} // if number is divisible by i then give value of i to gcd
                                               // continue this till i>0 or i>=1
    }
    return gcd; 
}
int main (){
    int a;
    printf("First number: ");
    scanf("%d",&a);
    int b;
    printf("First number: ");
    scanf("%d",&b);
    int gcd = hcf(a,b);
    printf("The GCD/HCF of %d and %d is %d",a,b,gcd);
    return 0;
}