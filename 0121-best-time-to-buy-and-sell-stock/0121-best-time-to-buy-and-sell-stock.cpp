class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = prices[0];
        int p = INT_MIN ;
        for(int i=1;i<prices.size();i++){
            int cost = prices[i]-mini;
            p = max(cost,p); 
            mini = min(mini,prices[i]);
        }
        if(p<0){
            return 0;
        }
        return p;
    }
};