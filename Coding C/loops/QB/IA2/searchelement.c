#include<stdio.h>
int main(){
    int arr[100],n,flag=1,i,store;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    for( i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    int num;
    printf("Enter a number to search: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num){flag=1;store=i;}
        else{flag=0;}
    }
    if(flag==1){printf("The number %d is present in array at %d index",num,store);}
    else{printf("Tne entered number doesn't exist in array");}
    return 0;
}