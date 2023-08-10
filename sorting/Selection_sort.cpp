#include<iostream>
#include<vector>
// #include<array>
using namespace std;

void selSort(int nums[],int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(nums[j] < nums[minIndex]) minIndex = j;
        }
        //swap
        swap(nums[i], nums[minIndex]);
    }
}

int main(){
    int arr[5]={5,456,2,0,99};
    selSort(arr,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";

    return 0;
}