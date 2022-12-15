#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int back;
    int size;

    public:
    Queue(){
        size=10001;
        arr = new int[size];
        front=0;
        back=0;
    }

    bool isEmpty(){
        return front==back;
    }

    void push(int n){
        if(back==size) cout<<"Queue is Full"<<endl;
        else{
            arr[back]=n;
            back++;
        }
    }

    int pop(){
        if(front==back) return -1;
        int ans = arr[front];
        arr[front]=-1;
        front++;
        if(front==back){
            front=0;
            back=0;
        }
        return ans;
    }

    int qfront(){
        if(front==back) return -1;
        return arr[front];
    }

    int qback(){
        if(front==back) return-1;
        return arr[back];
    }
};

int main(){
    Queue q;

    q.push(11);
    q.push(14);
    q.push(1);

    cout<<"front = "<<q.qfront()<<endl;

    q.pop();

    cout<<"front = "<<q.qfront()<<endl; 

    if(q.isEmpty()) cout<<"empty hai"<<endl;
    else cout<<"no"<<endl;
    return 0;
}