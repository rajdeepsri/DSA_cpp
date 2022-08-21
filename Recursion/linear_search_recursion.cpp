#include<iostream>
using namespace std;

bool search(int arr[], int n, int target){
    if(n==0) return false;
    if(arr[0]==target) return true;
    return search(arr+1,n-1,target);
}

int main(){
    int arr[10] = {2,45,7,3,23,9,3,566,235};
    int target = 7;
    if(search(arr,10,target)) cout<<"YES";
    else cout<<"NO";
    return 0;
}