class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        if(m>n) return false;

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(char c:s1){
            freq1[c-'a']++;
        }
        for(int i=0;i<m;i++){
            freq2[s2[i]-'a']++;
        }
        if(freq1==freq2) return true;

        for(int r=m;r<n;r++){
            freq2[s2[r]-'a']++;
            freq2[s2[r-m]-'a']--;
            
            if(freq1==freq2) 
                return true;
        }
        return false;
    }
    
};
