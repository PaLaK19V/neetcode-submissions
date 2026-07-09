class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            count+=countpali(s,i,i);
            count+=countpali(s,i,i+1);
        }
        return count;
    }
    int countpali(string &s,int l,int r){
        int count=0;
        while(l>=0 && r < s.size() && s[l]==s[r]){
            count++;
            l--;
            r++;
        }
        return count;
    }
};
