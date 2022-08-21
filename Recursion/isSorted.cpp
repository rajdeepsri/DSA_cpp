//given an array check if it is sorted or not
#include<iostream>
using namespace std;

bool isSorted(int *arr,int n){
    if(n==1 || n==0) return true; //base case
    if(arr[0]<arr[1]) return false; //processing
    return isSorted(arr+1,n-1); //RR
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    if(isSorted(arr,10)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}