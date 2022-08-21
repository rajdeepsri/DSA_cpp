#include<iostream>
using namespace std;

void print(int *p){ //shows how to pass pointer to function
    cout<< *p <<endl;
}

void update(int *p){
    *p=*p+1;
}

int getsum(int arr[], int n){ //instead of arr[], *arr chalega
//since funciton m array nhi uska pointer pass hota
    
    cout << endl << sizeof(arr) << endl; //8 aayga
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int num=5;
    int *p = &num;

    // cout<<"before updation "<<p<<endl;
    // update(p);
    // cout<<"after updation "<<p<<endl; //address didnt changed !!????

    // cout<<"before updation "<<*p<<endl;
    // update(p);
    // cout<<"after updation "<<*p<<endl; //value change ho gyi
    //check notes for logic

    int arr[5] = {1,2,3,4,5};
    cout<<getsum(arr,5)<<endl;

    return 0;
}