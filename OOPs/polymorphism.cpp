//when something exists in multiple forms
//Compile time overloading
#include<iostream>
using namespace std;

class A{ //functional overaloding
    public:
    void sayHello(){
        cout<<"hello";
    }

    void sayHello(char ch){
        cout<<"hello"<<ch;
    }

    void sayHello(string name){
        cout<<"hello"<<name;
    }
    int sayHello(string name, int n){
        cout<<"hello"<<name<<n;
        return 1;
    }
};

class B{ //operator overloading
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+(B &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"output"<< value2 -value1<<endl;
    }
};

int main(){
    // A obj1;
    // obj1.sayHello('a');

    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;

    obj1 + obj2;
    return 0;
}