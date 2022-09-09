class Solution {
public:
    bool static comparator(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comparator);
        int ans =0;
        int maxd=INT_MIN;
        int n= p.size();
        for(int i=n-1;i>=0;i--){
            if(p[i][1] < maxd){
                ans++;
            }
            if(p[i][1] > maxd){
                maxd = p[i][1];
            }
        }
        return ans;
        
    }
};