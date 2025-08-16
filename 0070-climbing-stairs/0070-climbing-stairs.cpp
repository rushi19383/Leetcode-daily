class Solution {
public:
    int climbStairs(int n) {
        vector<int>st(n+1,0);
        st[0]=1;
        st[1]=1;
        for(int i=2;i<=n;i++){
            st[i]=st[i-1]+st[i-2];
        }
        return st[n];
    }
};