class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> count;
        for(int num:nums){
            count[num]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> heap;
        for(auto& c : count){
            heap.push({c.second,c.first});
            if(heap.size()>k){
                heap.pop();
            }
        }
        //sort(arr.rbegin(),arr.rend());//r for backwards iteration vimp

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};
