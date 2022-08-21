#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
//--------------------------------------------------------
    s.push("raj");
    s.push("deep");
    s.push("srivastava"); //last out first in(LIFO)
//--------------------------------------------------------
    cout<<s.top()<<endl; //before pop
    s.pop();
    cout<<s.top()<<endl; //after pop
    return 0;}