class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        dfs(0,target,nums);
        return ans;
    }
    void dfs(int start,int target, vector<int> &nums){
        
        if(target==0){
            ans.push_back(path);
            return;
        }
        for(int i=start;i<nums.size();i++){
            if(nums[i]>target) break;
            if(i>start && nums[i]==nums[i-1]) continue;
            path.push_back(nums[i]);
            dfs(i+1,target-nums[i],nums);
            path.pop_back();
        }
    }
};
