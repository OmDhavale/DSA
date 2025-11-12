#include<stdio.h>

int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);

    // if (a%5==0 || a%3==0) {
    //     if(a%15!=0) 
    //         {printf("The number is divisible by 5 or 3 but not by 15");}
    //     else 
    //         {printf("The number is divisible by 5 or 3 and also by 15");}
    //   }
    // else
    // {printf("The number is not divisible by 5 or 3");}

    if ((a%5==0 || a%3==0) && a%15!=0)
      {printf("The no. is divisible by 5 or 3 but not by 15");}
    else 
    {printf("The condition is not satisfied");}

    return 0;
}