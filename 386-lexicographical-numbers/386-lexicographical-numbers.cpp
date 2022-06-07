class Solution {
public:
    vector<int>ans;
    void dfs(int i,int k){
        if(i>k){
            return;
        }
        ans.push_back(i);
        for(int j=0;j<=9;j++){
            dfs(i*10+j,k);
        }
    }
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<=9;i++){
            dfs(i,n);
        }
        return ans;
    }
};