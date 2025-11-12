#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){   //do arr[j]>arr[i] for descending order
                min=arr[i];
                arr[i]=arr[j];
                arr[j]=min;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}