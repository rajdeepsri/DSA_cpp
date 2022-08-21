#include<iostream>
#include<queue>
using namespace std;
//similar to queue excpet this is FIFO
int main(){
    queue<string> q;
    q.push("raj");
    q.push("deep");
    q.push("sri");

    q.pop();
    q.pop();//unlike stack isme shuru se 2 nikalenge
    cout<<q.front();
    return 0;
}