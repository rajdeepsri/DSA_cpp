#include<iostream>
using namespace std;

int getMin(int arr[],int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min) min = arr[i];
    }

    return min;
}

int getMax(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }

    return max;
}

int main(){

    int array1[100];
    int sizeOfArray;
    cin>>sizeOfArray;

    //taking input
    for(int i=0;i<sizeOfArray;i++) cin>>array1[i];

    cout<<"Max = "<<getMax(array1,sizeOfArray)<<endl;
    cout<<"Min = "<<getMin(array1,sizeOfArray)<<endl;
   return 0;
}