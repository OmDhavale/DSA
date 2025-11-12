#include<stdio.h>

int main (){
    int x1,y1;
    printf("Enter x coordinate: ");
    scanf("%d",&x1);
    printf("Enter y coordinate: ");
    scanf("%d",&y1);
  
    if (x1==0 && y1==0) {
        printf("The point lies at origin");
    }
    else if (x1==0 && y1!=0) {
        printf("The number lies on y axis");
    }
    else if (x1!=0 && y1==0){
        printf("The number lies on x axis");
    }
    else {printf("The number does not lie on axes but in x-y plane");}

    return 0;
}