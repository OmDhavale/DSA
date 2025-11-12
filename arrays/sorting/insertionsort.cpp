#include<iostream>
using namespace std;

int main(){
    int arr[] = {3,4,2,9,5,7};
    int size = 6;

    for(int i = 1 ; i < size ; i++){
        for(int j = i ; j > 0 ; j --){
            if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
            else break;
        }
    }   
    for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
    }
}