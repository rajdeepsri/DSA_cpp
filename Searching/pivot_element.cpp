#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0, e=n-1, mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]) s=mid+1;
        else e=mid;
        mid = s + (e-s)/2;
    }
    return arr[s];
}

int main(){
    int nums[8] = {5,8,10,17,1,2,5,6};
    cout<<getPivot(nums,8);
    return 0;
}