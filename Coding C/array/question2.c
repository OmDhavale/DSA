#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5},n;
    printf("Enter a number: ");
    scanf("%d",&n); //n=3
    for(int i=0;i<5;i++){
        if(arr[i]>arr[n-1])printf("%d",arr[i]);
    }
    return 0;
}