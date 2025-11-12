#include<stdio.h>
int main (){
  int a,fact=1;
  printf("Number taka: ");
  scanf("%d",&a);
  
//   for(int i=a;i>=1;i--) {
//     fact=fact*a;
//     a--;
//   }
 while(a>0) {
    fact=fact*a;
    a--;
 }
  printf("%d",fact);
  return 0;

}