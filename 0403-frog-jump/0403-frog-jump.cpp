class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        vector<vector<bool>> dp(n,vector<bool>(n+1,false));

        dp[0][1]=true;

        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int diff = stones[i] - stones[j];
                if(diff>n || !dp[j][diff])
                    continue;

                if(i==n-1)return true;

                dp[i][diff] = true;
                if(diff -1 >=0)dp[i][diff-1] = true;
                if(diff+1<=n)dp[i][diff+1] = true;     
            }
        }
        return false;
    }
};