//calculate (x^n)%m
#include<iostream>
using namespace std;

int fastEx(int x, int n, int m){
    int res = 1;

    while(n>0){
        if(n&1) res = (1LL * (res)*(x)%m)%m;
        x = (1LL *(x)%m*(x)%m)%m;
        n>>1; //divide by 2 hoga ye automatically
    }
    return res;
}

int main(){
    // int a=2,b=11;
    cout<<fastEx(a,b);
    return 0;
}