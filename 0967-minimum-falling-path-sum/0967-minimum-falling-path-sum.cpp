class Solution {
public:

    int fun(int i,int j,vector<vector<int>> &mat,vector<vector<int>>&dp){
        if(j<0 || j>=mat[0].size()) return 1e8;

        if(i==0) return mat[0][j];
        if(dp[i][j] != -1)return dp[i][j];
        int u = mat[i][j] + fun(i-1,j,mat,dp);
        int ld = mat[i][j] + fun(i-1,j-1,mat,dp);
        int rd = mat[i][j] + fun(i-1,j+1,mat,dp);

        return dp[i][j]= min(u,min(ld,rd));
    }


    int minFallingPathSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));

        for(int j=0;j<m;j++) dp[0][j] = mat[0][j];

        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int u = mat[i][j] + dp[i-1][j];
        int ld = mat[i][j];
            if(j-1>=0) ld += dp[i-1][j-1];
            else{ld+=1e8;}
        int rd = mat[i][j] ;

        if(j+1<m) rd+=dp[i-1][j+1];
        else{
            rd += 1e8;
        }

         dp[i][j]= min(u,min(ld,rd));
            }
        }





        int mini = 1e8;

        for(int j=0;j<m;j++){
            mini = min(mini,dp[n-1][j]);
        }

        return mini;

    }
};