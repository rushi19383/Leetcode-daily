class Solution {
public:
     int  dp[1001][1001];
    int LCS(string& x,string& y,int m,int n){
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(m==0 || n==0){
            return 0;
        }
        if(x[m-1]==y[n-1]){
            return dp[m][n]= 1+LCS(x,y,m-1,n-1);
        }else{
            return dp[m][n]= max(LCS(x,y,m,n-1),LCS(x,y,m-1,n));
        }
    }
    int longestCommonSubsequence(string x, string y) {
        int n=x.size();
        int m=y.size();
       
        memset(dp,-1,sizeof(dp));
         return LCS(x,y,n,m);
    }
};