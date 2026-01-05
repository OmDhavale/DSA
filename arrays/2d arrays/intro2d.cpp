#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={
        1,2,3,
        4,5,6,
        7,8,9,
        //1,1,1,1,
        // 10,11,12
    };

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //sum of diagonals - O(n^2) - problematic code
    int sumd = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j || i+j==2){
                sumd+=arr[i][j];
            }
        }
    }
    cout<< sumd<< endl;
    //sum of diagonals - O(n)
    int sum1 = 0;
    for(int i=0;i<3;i++){
        sum1 += arr[i][i];
    }
    int sum2 = 0;
    int i=0, j=2;

    while(j>=0 && i<3){
        sum2 += arr[i][j];
        i++;j--;
    }
    cout<<sum1+sum2<<endl;
    //reverse each row of matrix
    for(int i=0;i<3;i++){
        int start=0, end=3-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //return row index with max sum

    int  maxsum = 0, index;
    for(int i=0;i<3;i++){
        int rowsum = 0;
        for(int j=0;j<3;j++){
            rowsum+= arr[i][j];
        }
        if(rowsum > maxsum){
            maxsum = rowsum;
            index = i;
        }
    }
    cout<< "Maximum sum is: "<<maxsum<<" on index: "<<index;
    return 0;
}