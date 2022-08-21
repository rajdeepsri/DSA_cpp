#include<iostream>
#include<iterator>
#include<map>
#include<vector>
using namespace std;

int main(){
    vector<int> v ={2,3,4,6,7};
    // for(int i=0;i<v.size();i++){ //iterating using for
        // cout<<v[i]<<" "; 
    // }
    // cout<<endl;
    // vector<int> :: iterator it;
    // it = v.begin();
    // // cout<<(*it);
    // //iterating using iterators
    // //some containers dont have indices hence iterator useful
    // for(it = v.begin(); it!=v.end(); ++it){
    //     cout<<(*it);
    // }
    // //vector pair iterator
    // vector<pair<int,int>> vp = {{1,2},{2,3},{3,4}};
    // vector<pair<int,int>> :: iterator it;
    // for(it= vp.begin(); it!=vp.end(); ++it){
    //     cout<<(it->first)<<" "<<(it->second); //or (*it).first, (*it).second
    // }
    //-------------auto/range based loops----------------
    for(int n:v){
        cout<<n;
    }

    return 0;
}