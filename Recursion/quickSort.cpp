#include<iostream>
using namespace std;

int partition(vector<int>& arr, int s, int e){
    int pivot = arr[s];
    int count=0;

    //finding correct pos of pivot
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = s+count;

    //placing pivot at right place
    swap(arr[pivotIndex],arr[s]);

    //placed, now sort left and right parts
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e){
    //base case
    if(s>=e) return;

    //RR and call partition function
    quickSort(arr,s,partition(arr,s,e)-1);
    quickSort(arr,partition(arr,s,e)+1,e);
}

int main(){
    int arr[10]={5,9,2,1,0,6,7,1,92,13};
    quickSort(arr,0,9);
    for(auto i:arr){
        cout<<i<<;
    }
    return 0;
}