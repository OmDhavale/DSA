#include <stdio.h>

int main (){
    int arr[50],n,sumEven=0,sumOdd=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){sumEven=sumEven+arr[i];}
        if(i%2!=0){sumOdd=sumOdd+arr[i];}
    }
    int difference=sumEven-sumOdd;
    printf("Difference is:%d",difference);
    return 0;
}