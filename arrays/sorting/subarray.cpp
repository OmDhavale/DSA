#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={3,4,-2,5,8,20,-10,8};
    int n = arr.size();
    int totalsum=0,prefix=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
    }

    for(int i=0;i<n-1;i++){
        prefix += arr[i];
        int RHS = totalsum - prefix;

        if(prefix == RHS){ cout << "can be divided";}

    }
    

    return 0;
}