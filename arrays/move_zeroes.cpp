#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int i=0;
        for(auto &v: nums){
            if(v!=0){
                swap(nums[i], v);
                i++;
            }
        }
    }