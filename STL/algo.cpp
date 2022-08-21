#include<iostream>
#include<algorithm>
#include<vector>  
using namespace std;

int main(){
    vector<int> v={1,2,4,5,7,9};
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<binary_search(v.begin(),v.end(),3);
    //similarly, max(a,b), min(a,b),swap(a,b),reverse(s.begin(),s.end())
    //rotate(v.begin(),v.begin()+1,v.end())
    //sort(v.begin(),v.end())
    return 0;
}