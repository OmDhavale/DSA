#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,6};
    int n = 6;
    /**
     * Here I am given with size as 6, but array is length 5
     * number filling starts from 1.. and no repetition..given
     * in sequence from 1 to n
     * so 1 element would be missing
     * find that missing no.
     * missing elem = [ SUM OF ( 1 to N ) ]- SUM array elements
     */
    int sum =0;
    for (int i=0;i<5;i++){
        sum += arr[i];
    }

    int sumOfSeries = n*(n+1)/2;

    cout<<"Missing number was:"<<sumOfSeries-sum;
}