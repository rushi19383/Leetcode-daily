class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>dp1(n);
        
        dp1[n-1] = prices[n-1];
        for(int i=n-2;i>=0;i--){
            dp1[i]=max(dp1[i+1],prices[i]);
        }
        int max=INT_MIN;
        
        for(int i=0;i<n;i++){
            int dff=dp1[i]-prices[i];
            if(dff>max){
                max=dff;
            }
        }
        return max;
        
    }
};