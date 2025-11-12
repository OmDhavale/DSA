#include<stdio.h>
int main(){
    int mat[10][10],m,n,i,j;
    printf("Enter size of matrix: ");
    scanf("%d",&m);
    printf("Enter size of matrix: ");
    scanf("%d",&n);

    for( i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element: ");
            scanf("%d",&mat[i][j]);
        }
    }
    // for( i=0;i<n;i++){
    //     for(j=0;j<m;j++){
    //         mat[j][i]=mat[i][j];
    //     }
    // }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}