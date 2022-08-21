#include<iostream>
using namespace std;


int main(){
    int n,row=1;
    cin>>n;

    while(row<=n){
        int col=1;
        while(col<=n){
            char ch = 'A'+row-1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}