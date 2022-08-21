#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}

void sortOne(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]==1 && arr[end]==0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[start]==0) start++;
        else if(arr[end]==1) end--;
    }
}

int main(){

    int arr1[8]={1,1,1,1,0,1,1,0};
    sortOne(arr1,8);
    printArray(arr1,8);
    return 0;
}