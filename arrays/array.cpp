#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[4]={1,2,3,4}; //basic array
    array<int,4> array1 ={1,2,3,4}; //stl array
    int size = array1.size();
    for(int i=0;i<size;i++) cout<<array1[i]; //traversal

    cout<<"element at"<<array1.at(2);
    cout<<"empty or not"<<array1.empty();
}