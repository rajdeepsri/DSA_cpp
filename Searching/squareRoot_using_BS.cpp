#include<iostream>
using namespace std;

int SqRootIndex(int arr[], int n, int target){
    int start=0, end=n-1, mid= start + (end-start)/2;
    int ans=0;
    while(start<=end){
        if(arr[mid]*arr[mid]==target){
            return mid;
            }
        else if(arr[mid]*arr[mid]>target) end = mid-1;
        else{
            ans=mid;
            start=mid+1;
            }
        mid= start + (end-start)/2;
    }
    return mid;
}

int main(){
    int number; //say 36
    cout<<"Enter Number : ";
    cin>>number;
    int targetArray[number]={};
    for(int i=0;i<number;i++){
        targetArray[i]=i;
    }
    cout<<endl<<"The sq root is : "<<SqRootIndex(targetArray,number,number);
    return 0;
}