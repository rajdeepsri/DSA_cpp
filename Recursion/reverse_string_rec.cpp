#include<iostream>
#include<string>
using namespace std;

void revString(int i, int j, string &s){
    if(i>=j) return;
    swap(s[i],s[j]);
    i++;
    j--;
    revString(i,j,s);
}

int main(){
    string s = "rajdeep";
    cout<<s<<endl;
    revString(0,s.size()-1,s);
    cout<<s<<endl;

    return 0;
}