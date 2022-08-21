#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin>>n;
    
    while(row<=n){
        int col=1;
        char value='A';
        while(col<=row){
            cout<<char(value+row-1);
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}