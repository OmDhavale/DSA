#include<stdio.h>
int main(){
    int a,b,ch;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch){
      case 1:{
        printf("Addidion: %d",a+b);
        break;
        }
        case 2: printf("Subtraction:%d",a-b);
        break;
        case 3: printf("Mulriplication:%d",a*b);
        break;
        case 4: printf("Division:%f",(float)a/b);
        break;
    }
    return 0;
}