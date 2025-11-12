#include<stdio.h>
int main(){
    int arr[8]={1,3,5,6,7,2,4,8};
    int count=0;
    int x = 12;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[j]+arr[i]==x){
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("There are '%d' pairs having sum as %d",count,x);
    return 0;
}