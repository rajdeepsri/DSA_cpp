#include<iostream>
using namespace std;

class Human{ //parent class
    public:
    int height;
    int weight;
    int age;
    
    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};

class Male : protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};

int main(){
    Male m1;
    
    // cout<<m1.height; //error cuz protected
    cout<<m1.getHeight()<<endl; //now can be accessed
    
    /*
    m1.sleep(); //male property
    cout<<m1.weight<<endl; //inherited property
    */
    return 0;
}