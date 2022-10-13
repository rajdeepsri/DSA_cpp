#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int size, int count){
    //base case
    if(count==size/2){
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    solve(s,size,count+1);
    s.push(num);
}

void deleteMiddleElement(stack<int> &s, int size){
    int count=0;
    solve(s,size,count);
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<s.size()<<endl;
    deleteMiddleElement(s,s.size());
    cout<<s.size()<<endl;
    return 0;
}