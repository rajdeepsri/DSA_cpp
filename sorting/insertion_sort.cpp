#include<iostream>
#include<vector>
using namespace std;

void insSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        //element ke left walo se compare krenge, so for ith ham i-1 se krenge
        for( ; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else{
                break;
            }
        }
    }
}

int main(){
    int arr[7]={2,56,11,0,8,1,4};
    insSort(arr,7);
    for(int i=0;i<7;i++) cout<<arr[i]<<" ";
    return 0;
}