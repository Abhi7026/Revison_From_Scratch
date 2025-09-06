class Solution {
public:
void solve(vector<int>&nums, int i, vector<vector<int>>&ans,vector<int>&subset){
    if(i==nums.size()){
        ans.push_back(subset);
        return;
    }
    subset.push_back(nums[i]);
    solve(nums,i+1,ans,subset);
    subset.pop_back();
    solve(nums,i+1,ans,subset);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subset;
        solve(nums,0,ans,subset);
        return ans;
    }
};