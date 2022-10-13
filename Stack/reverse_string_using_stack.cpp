#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "razz";
    stack<char> s;

    cout<<"before : "<<str;
    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }
    int i=0;
    while(!s.empty()){
        str[i++]=s.top();
        s.pop();
    }

    cout<<"after : "<<str;
    return 0;
}