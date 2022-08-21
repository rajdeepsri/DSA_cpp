#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,7,9,11};
    int k = 2;
    vector<int> lol(4);
    //use mod
    for(int i=0; i<4; i++){
        lol[(i+k)%4] = v[i]; //shift k places in cyclic order
    }
    for(int i=0; i<4; i++){
        cout<<lol[i]<<" ";
    }
    return 0;
}