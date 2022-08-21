#include<iostream>
#include<string>
using namespace std;

int main(){
    string s, part;
    cin>>s;
    cin>>part;
    while(s.length()!=0 && s.find(part)<s.length()){
        // int i=s.find(part);
        // cout<<i<<endl;
        s.erase(s.find(part),part.length());
    }
    cout<<s;
    return 0;
}