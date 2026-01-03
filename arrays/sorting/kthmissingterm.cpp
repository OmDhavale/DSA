//Bruteforce method
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={2,3,4,7,11,12};
    int s = 6;
    vector<int> ans;
    for(int i=0;i<s;){
        for(int j=1;j<=arr[s-1];j++){
            if(arr[i]==j){
                i++;
                //j++;
            }
            else{
                ans.push_back(j);
                //j++;
            }
        }
    }
    cout<<"5th missing term: "<<ans[4]<<"\n";
    cout<<"Missing terms array: ";
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}