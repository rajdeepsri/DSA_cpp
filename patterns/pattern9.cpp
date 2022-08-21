#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<(char('A'+row-1));
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}