//from 0th stair, u can climb either 1 or 2 stair at a time
//count distinct ways to climb till Nth stair

#include<iostream>
using namespace std;

int climbStairs(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return climbStairs(n-1) + climbStairs(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<climbStairs(n)<<endl;
    return 0;
}