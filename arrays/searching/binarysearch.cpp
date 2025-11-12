#include<iostream>
using namespace std;

int main(){

    int arr[1000];

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter elem no "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"Enter number to find (key): ";
    int key;
    cin>>key;

    int start =0;
    int end = n-1;
    int mid =0;

    while(start <= end){
        mid = (start+end)/2;

        if(arr[mid]==key){
            cout<<"Element "<<key<<" present at index: "<<mid;
            break;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            cout<<"Sorry key not found !";
        }
    }

}