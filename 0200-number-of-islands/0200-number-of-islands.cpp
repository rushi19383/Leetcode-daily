class Solution {
public:
    void fnc(vector<vector<char>>&grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()){
            return;
        }
        if(grid[i][j]=='0')return;

        grid[i][j]='0';
        fnc(grid,i+1,j);
        fnc(grid,i-1,j);
        fnc(grid,i,j+1);
        fnc(grid,i,j-1);

    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt =0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    fnc(grid,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};