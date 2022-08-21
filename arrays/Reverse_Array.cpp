#include<iostream>
using namespace std;

void revArray(int arr[],int n){
    int start=0;
    int end=n-1;
    for(start;start<=end;start++,end--){
        swap(arr[start],arr[end]);
    }
}

void revArrayFromIndex(int arr[], int n, int key){
    int s = key+1;
    int e=n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main(){
    int array1[5]={1,2,3,4,5};
    // revArray(array1,5);
    // for(int i=0;i<5;i++) cout<<array1[i]<<" ";
    cout<<endl;
    revArrayFromIndex(array1,5,1);
    cout<<"from index 2 : ";
    for(int i=0;i<5;i++) cout<<array1[i]<<" ";
    return 0;
}