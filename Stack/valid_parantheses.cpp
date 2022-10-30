class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        
        for(auto i : str){
            //if opening brackets push
            //if closing then compare st.top and pop top
            if(i=='{' or i=='[' or i=='(') s.push(i);
            else{
                //for closing brackets
                if(!s.empty()){
                    //if matches
                    if((i=='}' && s.top()=='{') || (i==']' && s.top()=='[') || (i==')' && s.top()=='(')){
                        s.pop();
                    }
                    //doesn't match
                    else return false;
                }
                //stack empty
                else return false;
            }
        }
        if(s.empty()) return true;
        return false;
    }
};