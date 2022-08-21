#include<iostream>
using namespace std;

int sumArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[100];
    int sizeofarray;
    cout<<"Enter Size of the Array "<<endl;
    cin>>sizeofarray;

    //taking input of elements from user
    for(int i=0;i<sizeofarray;i++) cin>>arr[i];
    cout<<"The sum of array's elements is: "<<sumArray(arr,sizeofarray);
    return 0;
}