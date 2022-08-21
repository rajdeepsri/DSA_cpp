#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;

    if(b>a) return gcd(a,b-a);
    return gcd(a-b,b);
}
//iterative approach
/*
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a;
}
*/

int main(){
    int a=72,b=24;
    cout<<gcd(a,b);
    return 0;
}


// LCM(a,b) * GCD(a,b) = a*b