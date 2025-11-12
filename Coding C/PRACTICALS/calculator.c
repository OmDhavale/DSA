#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter 2 numbers: "); 
    scanf("%d %d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice number: ");
    scanf("%d",&n);
    switch (n){
        case 1: printf("Addition: %d",a+b);break;
        case 2: printf("Subtraction: %d",a-b);break;
        case 3: printf("Multiplication: %d",a*b);break;
        case 4: printf("Division: %f",(float)a/b);break;
        default: printf("U HAVE ENTERED WRONG CHOICE !");
    }
    return 0;
}