#include<stdio.h>
int main (){
    int a,b,temp;     //temp= temporary box ..jyat a chi or b chi value jaail
    printf("Enter number a: ");
    scanf("%d",&a);
    temp=a;
    printf("Enter number b: ");
    scanf("%d",&b);
    a=b;
    b=temp;
    printf("Swapped value is a= %d\n",a);
    printf("Swapped value is b= %d",b);

return 0;
}