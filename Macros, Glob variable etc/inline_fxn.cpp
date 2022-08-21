#include<iostream>
using namespace std;

void func(int a, int b){
    a++;
    b++;
    cout<<a<<b<<endl;
}

int main(){

    int a=2,b=1;
    int ans=0;
    ans = a<b? a : b; //ternary operator
    cout<<ans<<endl;
    return 0;
}