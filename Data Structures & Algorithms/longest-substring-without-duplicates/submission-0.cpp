class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int res=0;
        for(int i=0;i<n;i++){
            unordered_set<int>st;
            for(int j=i;j<n;j++){
                if(st.find(s[j])!=st.end()){
                    break;
                }
                st.insert(s[j]);
            }
            res=max(res,(int)st.size());
        }
        return res;
    }
};
