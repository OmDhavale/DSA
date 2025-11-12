#include<stdio.h>
int main(){
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          scanf("%d",&mat[i][j]);
        }
    }
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // if(i!=j){sum = sum + mat[i][j];} sum of non diagonal elements
            // if(i=j){sum = sum + mat[i][j];} sum of diagonal elements
           if(i!=j){ if(mat[i][j]==mat[j][i]){count=1;}}
        }
    }
    // printf("Sum of non diagonal elements = %d",sum);
    if(count==1){printf("Symmetric matrix");}
    else{printf("Unsymmetric matrix");}
    return 0;
}