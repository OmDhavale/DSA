#include<stdio.h>
int main () {
    int a,b;
    printf("Enter 2 nos: ");
    scanf("%d %d",&a,&b);
    int gcdf(int,int);
    gcdf(a,b);
    return 0;
}
int gcdf(int a,int b){
  int count=1,small,gcd;
  if(a>b){small=b;}
  else{small = a;}
  while(count<=small) {
    if(a%small==0 && b%small==0) {gcd=count;}
    count++;
  }
  printf("GCD is %d",gcd);
  return 1;
}