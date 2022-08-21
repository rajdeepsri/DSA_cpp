#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin>>n;
    char value= 'A';
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}