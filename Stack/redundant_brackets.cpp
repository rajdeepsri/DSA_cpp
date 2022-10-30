// ((a+b)) isme ek brackets faltu h
// (a*b + (c/d)) this is valid 
#include <bits/stdc++.h>
using namespace std;

bool isReduntant(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        //if s[i]== '(' or operator
        if(s[i]=='(' || s[i]=='-' || s[i]=='+' || s[i]=='*'|| s[i]=='/') st.push(s[i]);
        else{
            //if s[i]==')' or lower case letter
            if(s[i]==')'){
                bool isReduntant=true;
                while(st.top()!='('){
                    char ch=st.top();
                    if(ch=='-' || ch=='+' || ch=='*'|| ch=='/') isReduntant=false;
                    st.pop();
                }
                if(isReduntant) return true;
                st.pop();
            }
        }
    }
    return false;
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}
int main(){
    string s="((a+b)*(c*d))";
    if(isReduntant) cout<<"reduntant hai"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
