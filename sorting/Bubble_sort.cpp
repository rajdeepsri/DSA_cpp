#include<iostream>
using namespace std;

void insSort(int arr[], int n){
    bool swapped=false;
    for(int j=n-1;j>0;j--){ //ya phir for(int j=0; j<n; j++)
        for(int i=0;i<=j;i++){ //ya for(int i=0; i<n-i-1; i++)
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapped = true;
            }
        }
        //agar ek loop kuch bhi swap nhi krna pada, means already sorted(best case)
        if(swapped==false) break; //for optimisation
    }
}

int main(){
    int arr[6]={10,1,7,6,14,9};
    insSort(arr,6);
    for(int i=0;i<6;i++) cout<<arr[i]<<" ";
    return 0;
}