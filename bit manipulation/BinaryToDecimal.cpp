#include<iostream>
#include<math.h>

using namespace std;
int main(){

    int n;
    cin>>n;
    int ans=0, i=0;

    while(n!=0){
        // int bit = n & 1; bit nhi lenge coz when we enter 110 computer will understand it as decimal not binary
        int digit = n%10;
        if(digit==1){
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans;

    return 0;
}