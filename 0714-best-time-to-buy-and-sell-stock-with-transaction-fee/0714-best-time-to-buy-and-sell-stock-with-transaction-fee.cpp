class Solution {
public:
    int maxProfit(vector<int>& p, int fee) {
        int n = p.size();

        vector<vector<int>>dp(n+2,vector<int>(2,0));

        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                int profit;
                if(buy==0){
                    profit = max(0+dp[ind+1][0],-p[ind]+dp[ind+1][1]);
                }
                if(buy==1){
                    profit = max(0+dp[ind+1][1],p[ind]+dp[ind+1][0]-fee);
                }
                dp[ind][buy]=profit;
            }
        }
        return dp[0][0];



    }
};