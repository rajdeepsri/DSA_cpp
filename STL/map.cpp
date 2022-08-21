#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="raj";
    m[10]="deep";
    m[3]="sri";

    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
    return 0;
}