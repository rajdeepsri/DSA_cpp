#include<bits/stdc++.h>
using namespace std;

class KQueue{
    public:
    int n;
    int k;
    int *front;
    int *rear;
    int freespot;
    int *next;
    int *arr;

    public:
        KQueue(int n, int k){
            this->n=n;
            this->k=k;
            front=new int[k];
            rear=new int[k];
            for(int i=0; i<k; i++){
                front[i]=-1;
                rear[i]=-1;
            }
            next=new int[n];
            for(int i=0; i<k; i++){
                next[i]=i+1;
            }
            next[n-1]=-1;
            arr=new int[n];
            freespot=0;
        }

        void enqueue(int data, int qn){
            //overflow check
            if(freespot==-1){
                cout<<"overflow";
                return;
            }

            //find first free index
            int index=freespot;

            //update freespot
            freespot=next[index];

            //check whether first element
            if(front[qn-1]==-1) front[qn-1]=index;
            //link new element to previous
            else next[rear[qn-1]]=index;

            //update next
            next[index]=-1;

            //update rear
            rear[qn-1]=index;

            //push element
            arr[index]=data;
        }

        int dequeue(int qn){
            //underflow
            if(front[qn-1] == -1){
                cout<<"underflow";
                return -1;
            }

            //find index to pop
            int index = front[qn-1];

            //front ko aage badhao
            front[qn-1] = next[index];

            //freeslots manage crow
            next[index] = freespot;
            freespot = index;
            return arr[index];
        }
};

int main(){
    KQueue q(10,3);
    q.enqueue(5,1);
    q.enqueue(10,2);
    q.enqueue(15,1);
    q.enqueue(7,1);
    q.enqueue(17,2);

    cout<<q.dequeue(1);
    cout<<endl<<q.dequeue(2);
    cout<<endl<<q.dequeue(1);
    cout<<endl<<q.dequeue(1);

    

    return 0;
}