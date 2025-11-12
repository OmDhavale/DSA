#include<stdio.h>
int power(int n, int r){
    // int power=1;
    // while(r>0){
    //     power = power*n;
    //     r--;
    // }
    // return power;
    if(r==1){return 1;}
    else{return n*power(n,r-1);}
}
int main(){
    int n,r;
    printf("Enter number and power: ");
    scanf("%d %d",&n,&r);
    printf("%d raised to %d = %d",n,r,power(n,r));
    return 0;
}