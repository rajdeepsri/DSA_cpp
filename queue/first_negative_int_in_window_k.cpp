vector<long long> printFirstNegInt(long long int a[], long long int n, long long int k){

    deque<long long int> dq;
    vector<long long> ans;

    //pushing indices of negative elements in window k
    for(int i=0; i<k; i++){
        if(a[i]<0) dq.push_back(i);
    }

    //first element or front element will be the first negative element
    if(dq.size() > 0) ans.push_back(a[dq.front()]);
    else ans.push_back(0); //if dq is empty then simply 0

    for(int i=k; i<n; i++){
        //removal of earlier window element
        if(!dq.empty() && i - dq.front() >= k) dq.pop_front();

        //same logic as earlier
        if(a[i] < 0) dq.push_back(i);

        if(dq.size() > 0) ans.push_back(a[dq.front()]);
        else ans.push_back(0);
    }
    return ans;
}

//input = {12, -1, -7, 8, -15, 30, 16, 28}