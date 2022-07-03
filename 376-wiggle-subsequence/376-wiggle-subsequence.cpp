class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()==1)return 1;
        int prediff = nums[1]-nums[0];
        int count = (prediff !=0)? 2:1;
        for(int i=2;i<nums.size();i++){
            int curr = nums[i] - nums[i-1];
            if((curr>0 && prediff<=0) || (curr<0 && prediff>=0)){
                count++;
                prediff=curr;
            }
        }
        return count;
    }
};