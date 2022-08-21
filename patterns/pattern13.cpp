#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin>>n;
    while(row<=n){
        //print spaces
        int space=n-row;
        while(space){
            cout<<" ";
            space--;
        }
        //print 2nd triangle
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }
        //3rd triangle
        int start = row-1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        row++;
    }
    return 0;
}