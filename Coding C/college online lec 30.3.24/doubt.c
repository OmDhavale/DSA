#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);

    int arr[n];
    //int max = arr[0];             // max mai agar hum -1 store karde aur phir agar incase array ke andar koi -ve value daaldega toh kaise bachenge?
    // Toh it is better ki hum max ke andar -1 ke badle array ki sabse choti value daalde... like int max = arr[0]
    for(int i=0;i<n;i++){
        printf("Enter Element : ");
        scanf("%d",&arr[i]);
        // max = arr[0];
        //     if(max<arr[i]){
        //         max = arr[i];
        //     }
    }
    int max = arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("The max element is : %d",max);
    return 0;
}