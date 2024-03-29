class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> dp(n);
        // memset(dp,0,sizeof(dp));
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            dp[i]=dp[i-1]+nums[i];
        }
        return dp;
        
    }
};