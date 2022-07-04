class Solution {
public:
    int candy(vector<int>& r) {
//         int n = r.size();
//         vector<int>left(n+1,1);
//         for(int i=1;i<r.size();i++){
//             if(r[i]>r[i+1]) left[i]=left[i-1]+1;
            
//         }
//         int right = 1;
        
//         for(int j=n-2;j>=0;j--){
//             if(r[j]>r[j+1]){right++;left[j] =max(left[j],right);}
//             else right = 1;
//         }
//         int sum=0;
//         for(int v:left){
//             sum+=v;
//         }
        
//         return sum-1;
        int n = r.size();
        vector<int> c(n, 1);
        for (int i = 1; i < n; i++)
            if (r[i] > r[i - 1]) c[i] = c[i - 1] + 1;
        for (int i = n - 2; ~i; i--)
            if (r[i] > r[i + 1]) c[i] = max(c[i], c[i + 1] + 1);
        int res = 0;
        for (auto t: c) res += t;
        return res;
    }
};