class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return backtrack(0,0,target,nums);
    }
    int backtrack(int i,int total,int target,vector<int>&nums){
        if(i==nums.size()){
            return total==target;
        }
        return backtrack(i+1,total-nums[i],target,nums)+
        backtrack(i+1,total+nums[i],target,nums);
    }
};
