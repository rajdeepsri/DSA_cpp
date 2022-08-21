#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Present at "<<i<<"th place"<<endl;
            return true;
        }
    }
    return false;
}

int main(){
    int key;
    cout<<"Enter the element to search "<<endl;
    cin>>key;
    int array1[10]={3,4,5,2,6643,55,2,0,8,77};
    if(!search(array1,10,key)) cout<<"not present";
    
    
    return 0;
}