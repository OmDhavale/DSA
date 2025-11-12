#include<stdio.h>
void function(int x[]){
    
    int temp=x[0];
    x[0]=x[4];
    x[4]=temp;
    return; 
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d %d\n",arr[0],arr[4]);
    function (arr);
    printf("%d %d",arr[0],arr[4]);
    return 0;
}