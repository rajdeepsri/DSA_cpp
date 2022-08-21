#include<iostream>
#include<string>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans){
    //base case
    if(index>=str.size()){
        if(output.size()>0) ans.push_back(output); //excludes empty string
        return;
    }

    //exclude
    solve(str,output, index+1,ans);

    //include
    output.push_back(str[index]);
    solve(str,output,index+1,ans)
}

vector<string> subseq(string str){
    vector<string> ans;
    string output="";
    int index = 0;
    solve(ans,output,index,str);
}

int main(){
    string s;
    cin>>s;
    subseq(s);
    return 0;
}