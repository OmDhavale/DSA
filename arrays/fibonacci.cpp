#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter nth place: ";
    cin>>n;

    int arr[100];
    arr[0] = 0;
    arr[1] = 1;

    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout<<"Sum till "<<n<<"th element is: "<<arr[n];
}

/**
*  Enter nth place: 8
*  Sum till 8th element is: 21
 */