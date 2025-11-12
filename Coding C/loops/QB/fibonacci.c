#include<stdio.h>
int main (){
    int x=0,y=1,z,n;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    printf("%d %d ",x,y);
    for(int i=1;i<=n-2;i++) {
      z=x+y;
      printf("%d ",z);
      x=y;
      y=z;
    }

    return 0;
}