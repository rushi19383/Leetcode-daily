class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=0;

        for(int i=0;i<nums.size();i++){
            if(maxi<i)return false;
            if(maxi>nums[i]+i)continue;
            else maxi=max(maxi,i+nums[i]);

        }
        return true;

    }
};