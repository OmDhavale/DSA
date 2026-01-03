#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums;
    // nums.push_back(2);
    // nums.push_back(4);
    // nums.push_back(6);
    // nums.push_back(8);

    // for(int i:nums){
    //     cout<<i<<" ";
    // }
    
    // cout<<endl<<"Size: "<<nums.size()<<endl;
    // cout<<"Capacity: "<<nums.capacity()<<endl;

    // nums.push_back(10);

    // cout<<endl<<"Size: "<<nums.size()<<endl;
    // cout<<"Capacity: "<<nums.capacity()<<endl;
    // for(int i:nums){
    //     cout<<i<<" ";
    // }

    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(12);
    nums.push_back(44);
  

    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    //Binary search
    cout<<"43 found at index: "<<find(nums.begin(),nums.end(),44)-nums.begin();
    
    cout<<endl<<"Front elem: "<<nums.front()<<"Also: (nums[0])"<<nums[0]<<endl;
    cout<<"Back elem: "<<nums.back()<<"Also: (nums[nums.size()-1]): "<<nums[nums.size()-1];

    nums.erase(nums.begin()+1);//erase "2"
    cout<<"\nAfter erasing 2\n";
    for(int i:nums){
        cout<<i<<" ";
    }
    nums.pop_back();
     cout<<"\nAfter popping 44\n";
    for(int i:nums){
        cout<<i<<" ";
    }

    //copy one vector to another
    vector<int> vec2;
    vec2 = nums;
    cout<<"\nvec2: \n";
    for(int i: vec2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}