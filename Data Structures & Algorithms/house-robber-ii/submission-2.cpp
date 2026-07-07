class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        return max(dfs(nums,0,n-2),dfs(nums,1,n-1));
    }
    int dfs(vector<int>&nums,int start,int end){
        int rob1=0;
        int rob2=0;
        for(int i=start;i<=end;i++){
            int current=max(rob2,rob1+nums[i]);
            rob1=rob2;
            rob2=current;
        }
        return rob2;
    }
};
