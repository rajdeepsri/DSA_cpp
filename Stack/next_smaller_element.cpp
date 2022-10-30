//for every element in array, find next smaller element in the next window else return -1
//ip = [2,1,4,3]
//op = [1,-1,3,-1]

//approach1 - O(n2) complexicity 2 loops
//approach2
#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr){
    stack<int> s;
    int n = arr.size();
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }
        //ans is s.top
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}


int main(){
    
    vector<int> arr(5);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);


    return 0;
}
