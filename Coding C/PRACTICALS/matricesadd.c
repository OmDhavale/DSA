#include<stdio.h>
int main(){
    int n,i,j,k,l;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    int mat1[n][n],mat2[n][n];
    printf("Enter first matrix: ");
    for( i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter second matrix: ");
    for( k=0;i<n;i++){
        for(l=0;j<n;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Sum of matrices\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}