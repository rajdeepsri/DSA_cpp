#include<iostream>
using namespace std;

void update(int **ptr2){
    // ptr2 = ptr2 + 1;
    //kuch change hoga?? - NO, cuz PassByValue

    // *ptr2 = *ptr2 + 1;
    //kuch change hoga?? - YES, ptr will be incremented

    **ptr2 = **ptr2 + 1;
    //kuch change hoga?? -YES, value will be incremented
}

int main(){

    int val = 5;
    int *ptr = &val;
    int **ptr2 = &ptr;

    cout<<"Before : "<<val<<endl;
    cout<<"Before : "<<ptr<<endl;
    cout<<"Before : "<<ptr2<<endl;
    cout<<endl;
    update(ptr2);
    cout<<"After : "<<val<<endl;
    cout<<"After : "<<ptr<<endl;
    cout<<"After : "<<ptr2<<endl;

    // cout<<&val<<" "<<ptr<<" "<<ptr2<<" "<<*ptr2<<" "<<endl;
    // cout<<val<<" "<<*ptr<<" "<<**ptr2<<endl;
    // cout<<&val<<" "<<ptr<<" "<<*ptr2<<endl;
    return 0;
}