#include<iostream>
#include<math.h>

using namespace std;
int main(){
    
    int num;
    cin>>num;

    int ans =0;
    int i=0;
    while(num!=0){
        int bit = num &1;
        // ans = ans*10 + bit; for simple-flow
        // but yaha reverse flow karna hai
        ans = bit*(pow(10,i)) + ans;
        i++;
        num = num>>1;
    }
    cout<<ans;
    return 0;
}