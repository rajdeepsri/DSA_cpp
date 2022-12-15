#include<iostream>
#include<queue>
using namespace std;
int main(){

    deque<int> d;
    
    d.push_front(12);
    d.push_back(14);

    cout<<"front = "<<d.front()<<endl<<"back = "<<d.back()<<endl;

    d.pop_front();

    cout<<"front = "<<d.front()<<endl<<"back = "<<d.back()<<endl;

    return 0;
}