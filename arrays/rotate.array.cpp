#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6};
    int temp = arr[5]; //store last element to temp
    for(int i=5;i>=0;i--){
        arr[i] = arr[i-1]; //put 5 in 6 place 6 
    }
    arr[0] = temp;

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}