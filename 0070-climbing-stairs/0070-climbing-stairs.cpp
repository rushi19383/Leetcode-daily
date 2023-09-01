class Solution {
public:


    int climbStairs(int n) {
        // if(n<=1) return 1;
        // return climbStairs(n-1) + climbStairs(n-2);


         int prev = 1,prev2 =1;
        for(int i =2;i<=n;i++){
            int curri = prev + prev2;
            prev = prev2;
            prev2 = curri;
        }
        return prev2;
    }
};