#include<iostream>
using namespace std;

void insSort(int arr[], int n){
    bool isSwapped=false;
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped=true;
            }
        }
        if(!isSwapped) break; //optimization 
    }
}

int main(){
    int arr[6]={10,1,7,6,14,9};
    insSort(arr,6);
    for(int i=0;i<6;i++) cout<<arr[i]<<" ";
    return 0;
}