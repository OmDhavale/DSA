#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int A;
    vector<int>arr={2,7,11,15,27};
    int target = 22;
    for(int i=0;i<arr.size()-1;i++){
        A = target - arr[i];
        if(binary_search(arr.begin()+i+1,arr.end(),A)) cout<< "pair found\n"<<"["<<arr[i]<<", "<<A<<"]";
    }

    return 0;
}