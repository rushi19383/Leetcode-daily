class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inte, vector<int>& newInterval) {
        inte.push_back(newInterval);
        sort(inte.begin(),inte.end());
        int s=inte[0][0];
        int e=inte[0][1];
        vector<vector<int>>ans;
        for(int i=1;i<inte.size();i++){
            if(e>=inte[i][0]){
                e=max(e,inte[i][1]);
            }else{
                ans.push_back({s,e});
                s=inte[i][0];
                e=inte[i][1];
            }
        }
         ans.push_back({s,e});
         return ans;

    }
};