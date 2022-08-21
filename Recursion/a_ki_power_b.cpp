#include<iostream>
using namespace std;

int power(int a,int b){
    if(b==0 && a!=0) return 1;
    if(b==1) return a;
    if(b&1){
        return a*power(a,b/2)*power(a,b/2); 
    }
    return power(a,b/2)*power(a,b/2);
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans<<endl;
    return 0;
}