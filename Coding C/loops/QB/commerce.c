#include<stdio.h>
int main (){
    int a;
    printf("Enter salary: ");
    scanf("%d",&a);
    float d=0.4*a;
    float hr=0.2*a;
    printf("Gross salary = %f",a+d+hr);
    
    return 0;
}