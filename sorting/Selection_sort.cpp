#include<iostream>
#include<vector>
// #include<array>
using namespace std;

void selSort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        int min=nums[i];
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[i]) min=nums[j];
        }
        //swap
        int temp=nums[i];
        nums[i]=nums[min];
        nums[min]=temp;
    }
}

int main(){
    int arr[8]={5,6,3,1,7,2,242,55};
    selSort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}