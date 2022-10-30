#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &s, int num){
    //base case
    if(s.empty() || (!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    //recursive call
    insertSorted(s,num);
    s.push(n);
}

void sortStack(stack<int> &s){
    //base case
    if(s.empty()) return;
    
    int num = s.top();
    s.pop();
    
    //recursive call
    sortStack(s);
    insertSorted(s,num);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(-3);
    s.push(4);
    s.push(5);
    print(s);
    sortStack(s);
    print(s);
    return 0;
}
