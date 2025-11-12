#include<stdio.h>
int  power(int n,int r){
    if(r==0){return 1; }
    else{return n*power(n,r-1);}
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter power:");
    scanf("%d",&r);
    printf("Power is %d",power(n,r));

    return 0;
}