#include<stdio.h>
int main(){
    int arr[5]={1,4,2,6,7};
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[0]>arr[i]){min=arr[i];}
    }
    printf("Minumum element is %d",min);
    return 0;
}