class Solution {
public:
    int getAns(vector<int>&Arr,int n,int ind,int buy,int cap,vector<vector<vector<int>>>&dp){
        if(ind==n || cap==0) return 0;

        if(dp[ind][buy][cap] != -1){
            return dp[ind][buy][cap];
        }
        int profit;

        if(buy ==0){
            profit = max(0+getAns(Arr,n,ind+1,0,cap,dp),-Arr[ind]+getAns(Arr,n,ind+1,1,cap,dp));
        }
        if(buy ==1){
            profit = max(0+getAns(Arr,n,ind+1,1,cap,dp),Arr[ind]+getAns(Arr,n,ind+1,0,cap-1,dp));
        }
        return dp[ind][buy][cap]=profit;
    }

    int maxProfit(int k, vector<int>& p) {
        int n = p.size();

        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        for(int ind=n-1;ind>=0;ind--){
            for(int buy =0;buy<=1;buy++){
                for(int cap=1;cap<=k;cap++){
                    if(buy==0){
                        dp[ind][buy][cap] = max(0+dp[ind+1][0][cap],-p[ind]+dp[ind+1][1][cap]);
                    }
                    if(buy==1){
                        dp[ind][buy][cap] = max(0+dp[ind+1][1][cap],p[ind]+dp[ind+1][0][cap-1]);
                    }
                }
            }
        }
        return dp[0][0][k];
        // return getAns(p,n,0,0,k,dp);

    }
};