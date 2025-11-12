#include<stdio.h>
int main(){
    struct date{
        int dd,mm,yy;
    }a,b;
    printf("1. Enter dd mm yy: ");
    scanf("%d %d %d",&a.dd,&a.mm,&a.yy);
    printf("2. Enter dd mm yy: ");
    scanf("%d %d %d",&b.dd,&b.mm,&b.yy);
    
    if(a.dd==b.dd){
        if(a.mm==b.mm){
            if(a.yy==b.yy){
                printf("Equal");
            }
        }
    }
    else{printf("Unequal");}
    return 0;
}