#include<stdio.h>
int main(){
    int n,prod=1;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        if(i==0){printf("Enter 1st number: ");}
        else if(i==1){printf("Enter 2nd number: ");}
        else if(i==2){printf("Enter 3rd number: ");}
        else printf("Enter %dth number: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        prod=prod*arr[i];
    }
    if(n==1){
    printf("Only one element is given, it is: %d",arr[0]);
    }
    else{printf("Product of given %d elements = %d ",n,prod);}
    return 0;
}