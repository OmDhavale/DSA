#include<stdio.h>
int arm(int* a){
    int num = *a;
    int temp =num;
    int ld=1,sum=0;
    while(temp>0) {
    ld=temp%10;
    sum=sum+ld*ld*ld;
    temp=temp/10;
   }
   return (sum == num);
}
int main (){
    int no,a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
   
   if(arm(&a)){printf("Armstrong no");}
   else {printf("Not armstrong");}
    return 0;
}