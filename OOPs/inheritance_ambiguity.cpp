#include<iostream>
using namespace std;

class A{
    public:
    void print(){
        cout<<"hello im from A"<<endl;
    }
};

class B{
    public:
    void print(){
        cout<<"hello im from B"<<endl;
    }
};

class C : public A, public B{

};


int main(){
    //making obj of C
    C c1;
    // c1.print(); //kiska run hoga A ya B.. ans = error 
    c1.A::print(); //scope resolution operator
    return 0;
}