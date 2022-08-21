#include<iostream>
#include<array>
using namespace std;

bool binarySearch(int arr[], int s, int e, int target){
    if(s>e) return false;
    int mid = s + (e-s)/2;
    if(arr[mid]==target) return true;
    if(arr[mid]<target) return binarySearch(arr,mid+1,e,target);
    return binarySearch(arr,s,mid-1,target);
}

int main(){
    int arr[10] = {1,3,5,9,11,13,15,87};
    int target = 9;
    if(binarySearch(arr,0,9,target)) cout<<"YES";
    else cout<<"NO";
    return 0;
}