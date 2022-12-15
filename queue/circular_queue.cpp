#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int *arr;
    int size;
    int front;
    int back;

    CircularQueue(){
        size=100001;
        arr=new int[size];
        front=back=-1
    }

    bool enqueue(int val){
        if((front==0 && back==size-1) || (back==(front-1)%(size-1))){
            cout<<"queue is full"<<endl;
            return false;
        }
        else if(front==-1){ //first element aaya h push krne
            front=back=0;
        }
        else if(back==size-1 && front!=0){
            back=0;
        }
        else{
            back++;
        }
        arr[back]=val;
        return true;
    }

    int pop(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==back){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0; //to maintain cyclic nature
        }
        else front++;
        return ans;
};

int main(){
    return 0;
}