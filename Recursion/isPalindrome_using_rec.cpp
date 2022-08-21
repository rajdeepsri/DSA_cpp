#include<iostream>
#include<string>
using namespace std;

bool isPalin(string s, int i){
    if(i>=(s.size()-1-i)) return true; //base case
    if(s[i]!=s[s.size()-1-i]) return false; //processing
    else{
        return isPalin(s,i+1); //RR
    }
}

int main(){
    string s = "malayalam";
    if(isPalin(s,0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}