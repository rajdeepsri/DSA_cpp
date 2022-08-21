#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) start=mid+1;
        else end=mid-1;
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,5,6,7,10};
    int odd[5]={1,3,4,6,8};
    cout<<BinarySearch(even,6,124)<<endl;
    cout<<BinarySearch(odd,5,6)<<endl;
    return 0;
}