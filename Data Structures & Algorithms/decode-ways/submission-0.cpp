class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n, -1);
        return dfs(0, s, dp);
    }

private:
    int dfs(int i, string &s, vector<int> &dp) {
        int n = s.size();

        if (i == n) return 1;
        if (s[i] == '0') return 0;

        if (dp[i] != -1) return dp[i];

        int ways = dfs(i + 1, s, dp);

        if (i + 1 < s.size() && (s[i] == '1' ||
            s[i] == '2' && s[i + 1] < '7')) {
            ways += dfs(i + 2,s, dp);
        }

        return dp[i] = ways;
    }
};
