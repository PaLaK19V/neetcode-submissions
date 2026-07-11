class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int curmin=1;
        int curmax=1;
        for(int num:nums){
            int oldcurmax=curmax*num;
            curmax=max(max(num*curmin,curmax*num),num);
            curmin=min(min(num*curmin,oldcurmax),num);
            res=max(res,curmax);
        }
        return res;
    }
};
