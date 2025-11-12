#include<stdio.h>
int main (){
    int a,b,ch;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a, &b);
    printf("Enter your choice\n1.Add\n2.Subratct\n3.Multiply\n4.Divide");
    scanf("%d",&ch);

    switch(ch) {
        case 1: printf("%d",a+b);
        break;
        case 2: printf("%d",a-b);
        break;
        case 3: printf("%d",a*b);
        break;
        case 4: printf("%f",(float)a/b);
        break;
        default: printf("U have entered wrong choice");
    }
    return 0;
}