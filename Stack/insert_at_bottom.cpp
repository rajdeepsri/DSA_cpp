#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>& s, int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,x);
    s.push(num);
}

void pushAtBottom(stack<int>& s, int x) 
{
    solve(s,x);
    return;
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.size();
    pushAtBottom(s,10);

    cout<<s.size();
    return 0;
}
