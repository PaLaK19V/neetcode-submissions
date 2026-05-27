class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> map;
        for(int num:nums){
            map[num]++;
        }
        vector<pair<int,int>> arr;
        for(auto& c : map){
            arr.push_back({c.second,c.first});
        }
        sort(arr.rbegin(),arr.rend());//r for backwards iteration vimp

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
};
