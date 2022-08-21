#include<iostream>
using namespace std;
int main(){

    int num=5;
    cout<<"adress of num : "<<&num<<endl; //prints address

    int *ptr = &num; //declaration of pointer ptr
    /*
    int *p = 0;
    p = &i;
    */

    cout<<"address of num stored in p : "<<ptr<<endl;
    cout<<"value of num using ptr : "<<*ptr<<endl;
    //size of pointer is 8

    int *p = 0; //null pointer
    p = &num;

    //pointer increment krne se pointed variable bhi incremenet hoga
    // cout<<"before incrementing *p : "<<num<<endl;
    // (*p)++;
    // cout<<"After incerementing : "<<num;

    //copying pointer
    int *q = p;

    // //important concept
    (*q)++; //always use brackets else address increment hoga toh unknown value ko point krega
    cout<<q<<endl;
    cout<<*q<<endl;

    for(int i=0; i<)

    return 0;
}