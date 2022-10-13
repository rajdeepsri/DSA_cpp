#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    
    //behaviour
    Stack(int size){
        this->size=size;
        top=-1;
        arr = new int[size];
    }
    void push(int element){
        if(size-top >1 ){
            top++;
            arr[top]=element;
        }
        else cout<<"stack overflow"<<endl;
    }
    void pop(){
        if(top>=0) top--;
        else cout<<"stack underflow"<<endl;
    }
    int peek(){
        if(top>=0) return arr[top];
        else{
            cout<<"empty stack"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1) return true;
        return false;
    }
};

int main(){
    Stack st(5);
    st.push(10);
    st.push(23);
    
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isEmpty()) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;
    /*
    //creation of stack
    stack<int> s;

    //push elements
    s.push(2);
    s.push(3);
    s.push(5);

    //pop topmost element
    s.pop();

    cout<<"top element = "<<s.top()<<endl;
    if(s.empty()) cout<<"Empty hai! "<<endl;
    else cout<<"Not empty"<<endl;
    cout<<"size of stack = "<<s.size()<<endl;
    */

    //Implementation of Stack

    return 0;
}