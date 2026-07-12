class Solution {
public:
    vector<vector<int>> dp;

    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        dp.resize(n, vector<int>(2, -1));

        return dfs(0,true,prices);
    }

    int dfs(int i,bool buying,vector<int>& prices){

        if(i>=prices.size())
            return 0;

        if(dp[i][buying]!=-1)
            return dp[i][buying];

        int skip=dfs(i+1,buying,prices);

        if(buying){

            int buy=dfs(i+1,false,prices)-prices[i];

            return dp[i][buying]=max(buy,skip);
        }

        int sell=dfs(i+2,true,prices)+prices[i];

        return dp[i][buying]=max(sell,skip);
    }
};