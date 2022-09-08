#include<iostream>
using namespace std;

class Hero{
    private: //iske neeche wale cant be accessed outside
    char level;

    public: //iske neeche wale can be accessed anywhere
    int health;

    void setHealth(int h){
        health=h;
    }
    char getLevel(){ //getters
        return level;
    }
    void setLevel(char l){ //setters
        level=l;
    }

    Hero(){
        cout<<"constructor called"<<endl; //when object will be named, constructor call hoga
    }
    //const with param
    Hero(int health){
        this->health = health; //this will point to object of Hero
    }
};

int main(){

    Hero ramesh(60);

    cout<<ramesh.health<<endl; //ab health 60 print hogi
    Hero S(ramesh); //copy constructor
    cout<<S.health<<endl;


    // Hero h1; //creating instance of class Hero
    // // Hero *a = new Hero; //dynamically creating object
    // h1.health = 60;
    // // h1.level = 'a';//accessing elements of object
    // //how to access private elements - use setters/getters
    // cout<<"level is "<<h1.getLevel()<<endl; //using getter
    // h1.setLevel('v');
    // cout<<"level is "<<h1.getLevel()<<endl;
    // cout<<h1.health<<" "<<h1.level;
    return 0;
}