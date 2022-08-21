#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans=0;
    int array1[6]={1,2,3,4,3,5};

    for(int i=0;i<6;i++){
        ans=ans^array1[i];
    }
    for(int i=1;i<6;i++){
        ans=ans^i;
    }
    cout<<ans;
}