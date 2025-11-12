#include<stdio.h>
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return;
}
int main (){
    int a,b;     
    printf("Enter number a: ");
    scanf("%d",&a);
    printf("Enter number b: ");
    scanf("%d",&b);
    swap(a,b);
    printf("Swapped value is a= %d\n",a);
    printf("Swapped value is b= %d",b);

return 0;
}