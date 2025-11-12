#include<stdio.h>
int main() {
    int a,b,answer=1;
    printf("Enter any number and a power: ");
    scanf("%d %d",&a,&b);
    
   for(int i=1;i<=b;i++) {
    answer=answer*a;
   }
   printf("%d",answer);
    return 0;
}