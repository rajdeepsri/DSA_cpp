#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
    //dynamic array of variable size
    int n;
    cin>>n;
    int* arr = new int[n];

    //taking input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = getSum(arr,n);
    cout<<ans;
    return 0;
}