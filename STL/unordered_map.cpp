#include<iostream>
#include<iterator>
#include<vector>
#include<map>
using namespace std;
//func for for(auto) loop
void print(map<int,string> m){
    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
}

int main(){
    // map<int, string> m;
    // //how to insert elements
    // m[1]="abc"; // or m.insert({1,"abc"});
    // m[9]="abcfd";
    // m[5]="ithv";
    //how to print
    // map<int, string> :: iterator it;
    // for(it=m.begin(); it!=m.end(); ++it){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // print(m);
    ///auto nhi likhte toh likhna padta map<int, string> :: iterator it
    // auto it = m.find(5); //returns iterator of that element
    // if(it==m.end())
    //     cout<<"no value";
    // else
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // return 0;
    //----------------------------------------------------------
    //UNORDERED MAP
    unordered_map<int, string> um; //declaration
    //baki functions same as map bs ye sorted nahi hoga hence faster
    //time complexicity of insertion, find() etc = O(1) since unlike maps it doesn't
    //uses Trees but Hash tables.
}