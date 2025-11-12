#include<stdio.h>
int main(){
    int n,arr[n],sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}