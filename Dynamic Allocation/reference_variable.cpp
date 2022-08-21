#include<iostream>
using namespace std;

void update_ref(int& n){
    n++;
}

void update(int n){ //passbyvalue
    n++;
}

int main(){
    /*
    //how to create ref varibale
    int i=5;
    int &j = i;

    cout<<i<<" "<<j<<endl;
    i++;
    j++;
    cout<<i<<" "<<j<<endl;
    */

    //why to create?? PassByReference
    int n=5;
    cout<<"before updation : "<<n<<endl;
    update(n);
    cout<<"after updation : "<<n<<endl; //value remains the same since copy create hogi

    cout<<"before updation : "<<n<<endl;
    update_ref(n);
    cout<<"after updation : "<<n<<endl; //value will get changed cuz reference value pass ki
    return 0;
}