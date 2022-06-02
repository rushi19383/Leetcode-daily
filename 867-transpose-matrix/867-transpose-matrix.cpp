class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& ma) {
        int m = ma.size();
        int n = ma[0].size();
      vector<vector<int>> res(n,vector<int> (m,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[j][i]=ma[i][j];
            }
        }
        return res;
    }
};