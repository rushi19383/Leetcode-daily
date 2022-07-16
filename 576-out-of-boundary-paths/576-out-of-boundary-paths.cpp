class Solution {
public:
    int memo[51][51][51];
    int mod = 1000000007;
    long helper(int  m,int n,int maxm,int i,int j){
        if(i<0 || j<0 || i>=m || j>=n){
            return 1;
        }
        if(maxm<=0)return 0;
        
        if(memo[i][j][maxm] != -1){
            return memo[i][j][maxm];
        }
        long res=0;
        res+=helper(m,n,maxm-1,i+1,j);
        res+=helper(m,n,maxm-1,i-1,j);
        res+=helper(m,n,maxm-1,i,j+1);
        res+=helper(m,n,maxm-1,i,j-1);
        
        return memo[i][j][maxm]=res%mod;
        
    }
    int findPaths(int m, int n, int maxm, int startRow, int startColumn) {
        memset(memo,-1,sizeof(memo));
        return helper(m,n,maxm,startRow,startColumn);
    }
};