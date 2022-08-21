#include<iostream>
#include<vector
using namespace std;
int main(){
    vector<int> v={3,4,5,1,2};
    int count = 0;
    int n=v.size();

    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]) count++;
    }
    if(nums[n-1]>nums[0]) count++;
    return 0;
}