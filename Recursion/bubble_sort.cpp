#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int *arr, int n){
    if(n==0 || n==1) return; //base case - sorted

    //largest element ko end m pahucha diya
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
    bubbleSort(arr,n-1);
}

int main(){
    int arr[5]={7,4,1,0,5};
    bubbleSort(arr,5);
    for(auto i:arr){
        cout<<i;
    }
    return 0;
}