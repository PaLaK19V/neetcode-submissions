class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int reslen=0;
        int residx=0;
        //odd length
        for(int i=0;i<n;i++){
            int l=i;int r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(reslen<(r-l+1)){
                    residx=l;
                    reslen=r-l+1;
                }
                l--;
                r++;
            }
        
        //even length
            l=i;r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(reslen<(r-l+1)){
                    residx=l;
                    reslen=r-l+1;
                }
                l--;
                r++;
            }
        }
        return s.substr(residx,reslen);
    }
};
