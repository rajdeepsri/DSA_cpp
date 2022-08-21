//Power of two
#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number; //taking number as input from user
    int count=0;
    while(number!=0){
        if(number&1) count++; 
        number=number>>1;
    }
    if(count==1) cout<<"yes";
    else cout<<"No";
    return 0;
}