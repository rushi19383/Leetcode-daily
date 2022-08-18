class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // vector<int>ans(prices.size());
        // for(int i=0;i<prices.size()-1;i++){
        //     ans[i]=prices[i]-prices[i+1]?prices[i]-prices[i+1]>=0:prices[i];
        // }
        // return ans;
        stack<int> s;
        for(int i=prices.size()-1;i>=0;i--)
        {
            while(!s.empty() && s.top()>prices[i])
                s.pop();
            int x=prices[i];
            if(!s.empty()) prices[i]-=s.top();
            s.push(x);
        }
        return prices;
    }
};