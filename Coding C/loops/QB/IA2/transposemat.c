#include<stdio.h>
int main(){
    int a;
    printf("Enter the dimensions of matrix: ");
    scanf("%d",&a);
    // if(a!=a){printf("Transpose cannot ae found enter a square matrix!");}
    // else {
    
    int mat[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The Transpose of matrix is: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
    // }
    return 0;
}