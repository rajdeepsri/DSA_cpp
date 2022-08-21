#include<iostream>
#include<queue>
using namespace std;
//in a heap(min or max) elements are either in ascending or descending order
int main(){
    priority_queue<int> maxi; //max heap
    priority_queue<int,vector<int>, greater<int>> mini; //min heap

    maxi.push(1); 
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    maxi.pop();
    cout<<maxi.top();

    return 0;
}