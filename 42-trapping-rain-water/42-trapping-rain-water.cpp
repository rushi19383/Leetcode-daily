class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        
        int ans=0;
        int l=0;
        int r=n-1;
        
        int lb =arr[0];
        int rb = arr[n-1];
        
        while(l<=r){
            if(lb<rb){
                if(arr[l]>lb){
                    lb = arr[l];
                }else{
                    ans+=lb-arr[l];
                    l++;
                }
            }else{
                if(arr[r]>rb){
                    rb=arr[r];
                }else{
                    ans+=rb-arr[r];
                    r--;
                }
            }
        }
        return ans;
    }
};