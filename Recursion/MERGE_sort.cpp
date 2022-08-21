#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2;
    
    //finding lenghts of the two new arrays
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    //declaration of those 2 arrays
    int *first = new int[len1];
    int *second = new int[len2];
    
    //copying elements in first array
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) first[i]=arr[mainArrayIndex++];

    //copying elements in second array
    mainArrayIndex=mid+1;
    for(int i=0; i<len2; i++) second[i]=arr[mainArrayIndex++];

    //merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s; 

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]) arr[mainArrayIndex++] = first[index1++];
        else arr[mainArrayIndex++] = second[index2++];
    }

    while(index1<len1) arr[mainArrayIndex++] = first[index1++];
    while(index2<len2) arr[mainArrayIndex++] = second[index2++];

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    if(s>=e) return;
    int mid = s + (e-s)/2;
    //left part sort krna
    mergeSort(arr,s,mid);

    //right part ko sort kro
    mergeSort(arr,mid+1,e);

    //merge krdo
    merge(arr,s,e);
}

int main(){
    int arr[5]={9,1,5,0,2};
    mergeSort(arr,0,4);
    for(auto i:arr){
        cout<<i;
    }
    return 0;
}

//TC = 0(log N)