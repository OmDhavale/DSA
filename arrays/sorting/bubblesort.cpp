#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,5,2,7,1,9};
    int size = 6;

    for(int i = size - 2 ; i >=0 ; i--){
        for(int j = 0 ; j <= i ; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}