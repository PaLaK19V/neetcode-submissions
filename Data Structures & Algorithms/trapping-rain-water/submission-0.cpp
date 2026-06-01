class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       if(n==0) return 0;

       int l=0;
       int r=n-1;
       int leftmax=height[l];
       int rightmax=height[r];
       int trappedwater=0;
       while(l<r){
        if(leftmax<rightmax)
        {
            l++;
            leftmax=max(leftmax,height[l]);
            trappedwater+=leftmax-height[l];
        }
        else
        {
            r--;
            rightmax=max(rightmax,height[r]);
            trappedwater+=rightmax-height[r];
        }
       }
       return trappedwater; 
    }
};
