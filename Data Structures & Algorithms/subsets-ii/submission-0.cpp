class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(0,nums);
        return ans;
    }
    void dfs(int start, vector<int> &nums){
        ans.push_back(path);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            path.push_back(nums[i]);
            dfs(i+1,nums);
            path.pop_back();
        }
    }
};
