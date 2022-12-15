queue<int> modifyQueue(queue<int> q, int k) {
    //step 1 : pop first k element from the q and put into stack
    stack<int> st;
    int count=0;
    while(count<k){
        st.push(q.front());
        q.pop();
        count++;
    }
    
    //step 2 : fetch elements from stack and push into q
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
    //step 3 : fetch first (n-k) elements from q and pushback
    int t = q.size() - k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}