class Solution {
public:
    int maxloot(vector<int>&nums){
        int n= nums.size();
        int prev = nums[0];
        int prev2 =0;
        for(int i=0;i<n;i++){
            int take = nums[i];

            if(i>1)take += prev2;

            int notTake = 0 + prev;

            int curi = max(take,notTake);

            prev2 = prev;
            prev = curi;
        }

        return prev;
    }
    int rob(vector<int>& nums) {
        
        if(nums.size()==1)return nums[0];
        vector<int>temp1,temp2;
        for(int i=0;i<nums.size()-1;i++){
            temp1.push_back(nums[i]);
        }

             for(int i=1;i<nums.size();i++){
            temp2.push_back(nums[i]);
        }

        int t1 = maxloot(temp1);
        int t2 = maxloot(temp2);

        int ans = max(t1,t2);

        return ans;


    }
};