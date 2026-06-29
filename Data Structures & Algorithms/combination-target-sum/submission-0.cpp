class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    void dfs(int start,int target,vector<int>&nums){
        if(target==0){
            ans.push_back(path);
            return;
        }
        if(target<0) return;
        for(int i=start; i<nums.size();i++){
            if(nums[i]>target) continue;
            path.push_back(nums[i]);
            dfs(i,target-nums[i],nums);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        dfs(0,target,nums);
        return ans;
    }
};
