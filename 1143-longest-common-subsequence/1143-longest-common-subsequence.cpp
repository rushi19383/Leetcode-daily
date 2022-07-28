class Solution {
public:
     int  dp[1001][1001];
    int LCS(string& x,string& y,int n,int m){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(0+dp[i][j-1],0+dp[i-1][j]);
                }
            }
        }
        return dp[n][m];
         
    }
    int longestCommonSubsequence(string x, string y) {
        int n=x.size();
        int m=y.size();
       
        memset(dp,-1,sizeof(dp));
         return LCS(x,y,n,m);
    }
};