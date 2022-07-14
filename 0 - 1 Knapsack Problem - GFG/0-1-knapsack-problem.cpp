// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
      int knap(int W,int wt[],int val[],int n,vector<vector<int>>&dp){
        if(n == 0 || W == 0)
        return 0;
       
       //choice Diagram
       if(dp[n][W] != -1)
        return dp[n][W];
       
       if(wt[n-1]<=W){
           return dp[n][W] = max(val[n-1] + knap(W-wt[n-1],wt,val,n-1,dp),knap(W,wt,val,n-1,dp));
       }
       else{
           return dp[n][W] = knap(W,wt,val,n-1,dp);
       }
    }
   
   int knapSack(int W, int wt[], int val[], int n) 
   { 
      
      vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
      
      return knap(W,wt,val,n,dp);
      
   }
    
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends