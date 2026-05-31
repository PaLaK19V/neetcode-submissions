class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size(); 
        for(int i=0;i<n;i++){
            int temp=target-arr[i];
            int l=i+1;
            int r=n-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(arr[mid]==temp){ return {i+1,mid+1};
                }
                else if(arr[mid]<temp) {
                    l=mid+1;
                }
                else {
                    r=mid-1;
                }
            }
        }
        return {};
    }
};
