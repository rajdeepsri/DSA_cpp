//print sum of elements of array

#include<iostream>
using namespace std;

int sumArrays(int *arr, int n){
    if(n<=0) return 0;
    return sumArrays(arr+1,n-1) + arr[0];
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum = "<<sumArrays(arr,10)<<endl;
    return 0;
}