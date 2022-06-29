bool comp(vector<int>&a,vector<int>& b){
    if(a[0]==b[0])  return a[1]<b[1];
    return a[0]>b[0];
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comp);
        vector<vector<int>> ans;
        for(auto man : p){
            ans.insert(ans.begin()+man[1],man);
        }
        return ans;
    }
};