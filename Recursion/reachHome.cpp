#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    if(src==dest){
        cout<<"pahuch gya"<<endl;
        return;
        }
    src++;
    reachHome(src,dest);
}

int main(){
    int src = 1;
    int dest = 100;
    reachHome(src,dest);
    return 0;
}