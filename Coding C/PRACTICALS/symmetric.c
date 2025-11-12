#include<stdio.h>
int main(){
    int n;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // printf("Enter element(%d,%d): ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int test=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j) {
            if(arr[i][j]==arr[j][i]){test++;}
            else{test=0;}
            }
        }
    }
    if(test>0){printf("Symmetric matrix");}
    else{printf("Unsymmetric");}
    return 0;
}