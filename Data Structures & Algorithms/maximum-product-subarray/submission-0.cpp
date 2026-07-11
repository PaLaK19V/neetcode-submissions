class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        for(int i=0;i<n;i++){
            int curr=nums[i];
            res=max(curr,res);
            for(int j=i+1;j<n;j++){
                curr*=nums[j];
                res=max(curr,res);
            }
        }
        return res;
    }
};
