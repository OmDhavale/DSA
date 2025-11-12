#include<iostream>
using namespace std;

int main(){

    cout<<"Ganpati Bappa Morya ! Beginning with DSA Journey";

    int arr[100];
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }

    int max = INT8_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int secmax = INT8_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]!=max && arr[i]>secmax){
            secmax = arr[i];
        }
    }
    cout<<"Second Maximum: "<<secmax;
}