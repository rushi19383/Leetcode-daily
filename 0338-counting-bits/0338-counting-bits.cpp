class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=1;i<=n;i++){
            if(i%2==0){
                ans[i]=ans[i/2];
            }else{
                ans[i]=ans[i/2]+1;
            }



            // int num = i;
            // int cnt = 0;
            // while(num>0){
            //     if(num%2==1){
            //         cnt++;
            //     }
            //     num/=2;
            // }
            // ans[i]=cnt;
        }
        return ans;
    }
};