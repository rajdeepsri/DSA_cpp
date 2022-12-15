#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(11);
    q.push(14);
    q.push(1);

    cout<<"size = "<<q.size()<<endl;
    cout<<"front = "<<q.front()<<endl;

    q.pop();

    cout<<"size = "<<q.size()<<endl;
    cout<<"front = "<<q.front()<<endl; 

    if(q.empty()) cout<<"empty hai"<<endl;
    else cout<<"no"<<endl;

    return 0;
}