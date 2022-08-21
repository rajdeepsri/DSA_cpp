#include<iostream>
using namespace std;
int main(){
    /*
    int arr[10]={2,5,6,8,0};
    cout<<"address using arr : "<<arr<<endl;
    cout<<"address using &arr[0] : "<<&arr[0]<<endl;
    cout<<"*arr kya hoga : "<<*arr<<endl;
    cout<<"*(arr+1) : "<<*(arr+1)<<endl;
    
    // arr[i] = *(arr+i) - REMARK

    cout<<"index andar array bahar : "<<arr[2]<<endl;
    cout<<"array andar index bahar : "<<2[arr]<<endl;
    //chalaki++

    int arr[10];
    // arr = arr + 1; ye nahi kr skte coz address ko nhi badal skte symbol table k
    int *prt = &arr[0];
    ptr = ptr + 1; //ye kr stke
    
    */
    char ch[6] = "abcde";
    char *c = &ch[0];

    cout<<c<<endl; //prints the whole string
    cout<<(*c)<<endl; //prints the value at c, ie first element
    cout<<&c<<endl<<endl; //prints address of c

    char temp = 'z';
    char *ptr = &temp;

    cout<<ptr<<endl; //prints absurd things
    }