#include<stdio.h>
int main (){
    
    int arr[5]={-4,-2,-5,-14,-6};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){max=arr[i];}
    }
    printf("Maximum element is: %d ",max);
    return 0;
}