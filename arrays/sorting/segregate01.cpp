#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {0,1,1,0,1};
    int start = 0, end = arr.size()-1;
        
        while(start<=end){
            if(arr[start]>arr[end]){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else{
                start++;
                end--;
            }
        }
    
    for(int i: arr){
        cout<< i <<" ";
    }
    return 0;
}