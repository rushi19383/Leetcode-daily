class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count = 0;
                if(grid[i][j]==1){
                    count=1;
                    area(grid,i,j,count);
                }
                maxi = max(count,maxi);
            }
    
        }
        return maxi;
    }
    int area(vector<vector<int>>&grid,int i,int j,int& count){
        if(i<0 || j<0 || i>=grid.size() ||j>=grid[0].size() || grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0;
        if(area(grid,i+1,j,count))count++;
        if(area(grid,i-1,j,count))count++;
        if(area(grid,i,j+1,count))count++;
        if(area(grid,i,j-1,count))count++;
        
        return 1;
    }
    
};