#include<stdio.h>
int main(){
    int a,count=0;
    printf("Enter the dimensions of matrix: ");
    scanf("%d",&a);
    int mat[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("Enter element (%d,%d): ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
           if(mat[i][j]==mat[j][i]){count=1;}
           else{count=0;}
        }
        
    }
    if(count==1){printf("Symmetric matrix");}
    else{printf("Unsymmetric matrix");}
    return 0;
}