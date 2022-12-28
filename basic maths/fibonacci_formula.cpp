#include<iostream>
using namespace std;

void printFibonacci(int n){
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";
    
    int nextTerm=0;
    for(int i=2; i<=n; i++){
        nextTerm=a+b;
        cout<<nextTerm<<" ";
        a=b;
        b=nextTerm;
    }
}

int main(){
    printFibonacci(10);
    return 0;
}