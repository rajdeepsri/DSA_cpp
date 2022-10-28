#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int count){
    //base case
    if(count>=s.size()){
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();
    solve(s,count+1);
    s.push(num);
}

void delBottom(stack<int> &s){
    int count=0;
    solve(s,count);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(4);

    cout<<s.size()<<endl;
    delBottom(s);
    cout<<s.size()<<endl;
    return 0;
}