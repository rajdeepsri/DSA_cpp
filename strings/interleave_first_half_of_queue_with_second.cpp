#include<bits/stdc++.h>
using namespace std;

void printQueue(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    queue<int> q;
    int n; //size of queue == q.size()
    cin>>n;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        q.push(num);
    }
    
    printQueue(q);
    cout<<endl<<endl;
    /*
    queue<int> newQ;

    for(int i=0; i<n/2; i++){
        newQ.push(q.front());
        q.pop();
    }

    while(!newQ.empty()){
        q.push(newQ.front());
        newQ.pop();

        q.push(q.front());
        q.pop();
    }

    printQueue(q);
    cout<<endl<<endl;
    */

    // NOW DO USING STACK
    
    return 0;
}