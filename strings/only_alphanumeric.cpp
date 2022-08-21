#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="ra@ce a car";
    for(int i=0; i<s.length(); i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
            continue;
        }
        else{
            s.erase(i,1);
        }
    }
    cout<<s;
    return 0;
}