class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int cnt=0;
        int max_count=INT_MIN;
        for(int i:nums){
            if(i==1){
                cnt++;
            }else{
                if(cnt>max_count){
                    max_count=cnt;
                     
                }
                cnt=0;
            }
        }
         if(cnt>max_count){
                    max_count=cnt;
                     
                }
        return max_count;
    }
};