#include<iostream>
using namespace std;

int factorial(int num){
    /* Recurison is slow hence use Iterative approach
    if(num < 1) return 1;
    else return num*(factorial(num-1)); */

    if(num>1){
        int ans=1;
        for(int i=1;i<=num;i++){
            ans = ans*i;
        }
    return ans;
    }
    else{
        return 1;
    }}
    

int main(){

    int n,r;
    cout<<"enter the value of n and r respectively"<<endl;
    cin>>n>>r;

    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"nCr = "<<ans<<endl;

    return 0;
}