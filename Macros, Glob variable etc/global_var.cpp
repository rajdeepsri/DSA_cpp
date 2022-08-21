#include<iostream>
using namespace std;

int op = 11; //global variable

void a(int i){
    // char ch = 'a';
    cout<< op <<endl;
}
void b(int i){
    cout<<op<<endl;
}

int main(){

    int i=5;

    {
        int i=1;
        cout<<i<<endl; //1 print hoga
    }
    cout<<i<<endl; //5 print hoga

    cout<<endl<<endl;
    a(i);
    b(i);
    cout<<op;

    return 0;
}