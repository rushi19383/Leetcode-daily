class Solution {
public:
    int uniquePaths(int m, int n) {
       int dp[m][n];
       memset(dp,0,sizeof(dp));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0){
                    dp[i][j] = 1;
                }else{
                    int up =0;
                    int left=0;
                    if(i>0) up = dp[i-1][j];
                    if(j>0) left = dp[i][j-1];
                    dp[i][j] = up +left;
                }
            }
        }
        // for(int i=1;i<m;i++){
        //     for(int j=1;j<n;j++){
        //         dp[i][j]=dp[i-1][j]+dp[i][j-1];
        //     }
        // }
        return dp[m-1][n-1];
    }
};