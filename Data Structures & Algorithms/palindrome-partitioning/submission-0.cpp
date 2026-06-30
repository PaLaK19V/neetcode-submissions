class Solution {
public:

    vector<vector<string>> ans;
    vector<string> path;

    bool isPalindrome(string &s,int l,int r){

        while(l<r){

            if(s[l++]!=s[r--])
                return false;
        }

        return true;
    }

    void dfs(int start,string &s){

        if(start==s.size()){

            ans.push_back(path);
            return;
        }

        for(int end=start;end<s.size();end++){

            if(!isPalindrome(s,start,end))
                continue;

            path.push_back(s.substr(start,end-start+1));

            dfs(end+1,s);

            path.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {

        dfs(0,s);

        return ans;
    }
};
