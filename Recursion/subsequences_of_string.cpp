#include<iostream>
#include<string>
using namespace std;

vector<string> subseq(string str){
    vector<string> ans;
    string output="";
    int index = 0;
    solve(ans,output,index,str);
}

int main(){
    string s;
    cin>>s;

    return 0;
}