#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "rajdeep";
    stack<char> st;

    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
    }

    string ans = "";
    while(!st.empty()){
        ans= ans + st.top();
        st.pop();
    }
    cout<<"reversed string is "<<ans<<endl;
    return 0;
}