// Using XOR Approach
#include<iostream>
using namespace std;

int main(){
    int array1[8]={1,2,3,4,2,4,3,1};
    int ans=0;
    for(int i=0;i<8;i++){
        ans = ans^array1[i];
    }
    if(ans!=0) cout<<"Yes one unique number"<<endl;
    else cout<<"No unique element"<<endl;

    return 0;
}