class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>map;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int temp=target-numbers[i];
            if(map.count(temp)){
                return {map[temp],i+1};
            }
            else{
                map[numbers[i]]=i+1;
            }
        }
        return {};
    }
};
