class Solution {
public:
    int bestClosingTime(string customers) {
        int n =customers.size();
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            a[i] = a[i-1] + (customers[i-1] == 'N');
        }

        int hr = 0;
        int val = n-a[n];
        for(int i=1;i<=n;i++){
            int ans = a[i-1]+(n-i-(a[n]-a[i]));
            if(ans<val){
                val = ans;
                hr =i;
            }
        }
        return hr;
    }
};