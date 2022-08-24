/*
LEETCODE 46
input-> str="bca"
output-> {"abc","acb","bac","bca","cab","cba"}
lexographically increaing order
*/
class Solution {
private:
    void solve(vector<vector<int>>& ans, int index, vector<int> nums){
        //base case
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index; j<nums.size(); j++){
            swap(nums[index],nums[j]);
            solve(ans,index+1,nums);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(ans,index,nums);
        return ans;
    }
};