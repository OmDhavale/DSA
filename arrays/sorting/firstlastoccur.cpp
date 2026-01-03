#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,7,7,8,8,9};
    int size = 7;
    int key;
    cout <<"Enter number to check occurence: ";
    cin >> key;

    //FIrst occurence
    int start=0, mid, end = size-1, first = -1,last=-1;
    while(start <=end){
        mid = start + (end-start)/2;
        if(key == arr[mid]) {
            first = mid;
            end = mid-1;
            if(start>end){
                start =0;
                end = size-1;
                
                while(start<=end){
                    mid = start + (end-start)/2;
                    if(key==arr[mid]){
                        last = mid;
                        start = mid+1;
                    }
                    else if(arr[mid]<key){
                        //move right
                        start = mid+1;
                    } 
                    else{
                        end = mid-1;
                    }
                }

            }
        }   
        else if(arr[mid]<key){
            //move right
            start = mid+1;
        } 
        else{
            end = mid-1;
        }
    }
    cout << "First occurence of "<<key<<" is at index: "<<first<<" and last occured at index: "<<last;


    return 0;
}