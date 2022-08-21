#include<iostream>
using namespace std;
int main(){
    int A[4]={1,2,3,4};
    int B[4]={3,1,4,6};

    int ans=0;
    for(int i=0;i<4;i++){
        ans = ans^(A[i]^B[i]);
    }
    if(ans==0) cout<<"same"<<endl;
    else cout<<"different"<<endl;
    return 0;
}