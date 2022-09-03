class Solution {
public:
    int digit(int x){
        int count =0;
        while(x){
            count++;
            x=x/10;
        }
        return count;
    }
    
    void findNumbers(int curr,int n,int k,vector<int>&result){
        if(digit(curr)==n){
            result.push_back(curr);
            return;
        }
        
        for(int i=0;i<10;i++){
            int last = curr%10;
            
            if(abs(last -i )==k){
                findNumbers((curr*10+i),n,k,result);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>result;
        for(int i=1;i<10;i++){
            findNumbers(i,n,k,result);
        }
        return result;
    }
};