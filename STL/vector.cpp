#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //declared with capacity = 0
    vector<int> a(5,1); //declares with size=5 and each element=1
    vector<int> last(a); //copies vector 'a'
    v.pushback(1); //pushing elements in vector at last pos
    v.pop_back(); //pops element from the last
    cout<<v.front()<<" "<<v.back()<<endl; //1st and last print
    v.clear(); //clears, makes size=0 but capacity will be unaffected
    v.size(); //size nikalna
}