#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int num){
    //base case
    if(s.empty()){
        s.push(num);
        return;
    }
    int numb = s.top();
    s.pop();
    insertAtBottom(s,numb);
    s.push(numb);
}

void reverse(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,num);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top();
    reverse(s);

    cout<<s.top();
    return 0;
}
