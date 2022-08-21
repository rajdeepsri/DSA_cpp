#include<iostream>
#include<vector>

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }

}

using namespace std;
int main(){

    int nums1[5]={11,22,33,44,55};
    int nums2[3]={2,4,6};
    int arr3[8]={0};    

    merge(nums1,5,nums2,3,arr3);
    for(auto i : arr3) cout<<i<<" ";
    return 0;
}