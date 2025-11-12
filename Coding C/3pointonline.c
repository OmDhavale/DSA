#include<stdio.h>

int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter 1st point: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter 2nd point: ");
    scanf("%d %d",&x2,&y2);
    printf("Enter 3rd point: ");
    scanf("%d %d",&x3,&y3);
    
    if (((y2-y1)/(x2-x1))==((y3-y2)/(x3-x2))) {
        printf("The points are collinear");
    }
    else {
        printf("The points are non-collinear");
    }

    return 0;
}