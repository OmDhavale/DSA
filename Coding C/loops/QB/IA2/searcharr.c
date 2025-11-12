#include<stdio.h>
int main(){

    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    int s;
    printf("Enter which element number you have to search");
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[s-1])printf("The %d number element is %d",s,arr[s-1]);
        else if(s>n){printf("The %d number element does not exist ",s);
        break;}
    }
    return 0;
}