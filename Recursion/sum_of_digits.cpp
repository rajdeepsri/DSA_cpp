//input = 999
//output = 9+9+9=27, 2+7=9
#include<iostream>
using namespace std;

int rec(int n){
    //base case
    if(n<10) return n;
    int ans=0;
    while(n!=0){
        int digit = n%10;
        ans = ans + digit;
        n=n/10;
    }
    return rec(ans);
}

int main(){
    int n;
    cin>>n;
    cout<<rec(n)<<endl;
}