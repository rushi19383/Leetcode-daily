class Solution {
    private:
    int minPath(int row, int col, vector<vector<int>> &triangle,  vector<vector<int>> &dp){
        int n = triangle.size();

        if(row == n-1)
        return triangle[row][col];

        if(dp[row][col] != -1)
         return dp[row][col];

        int up = triangle[row][col] + minPath(row+1, col, triangle, dp);
        int diag = triangle[row][col] + minPath(row+1, col+1, triangle, dp);

        return dp[row][col] = min(up, diag);
    }

public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int> (n, -1));
        return minPath(0, 0, triangle, dp);
        
    }
};