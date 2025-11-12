#include<stdio.h>
int main(){
    int n,a=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int series (int);
    int sum=series(n);
    printf("%d",sum);
    return 0;
}
int series (int n){
    // int sum=0;
    // if(){return 1;}
    // else {return sum=sum+series(n,a);}
    if(n==1){return 1;}
    else{
        return n+series(n-1);
    }
}