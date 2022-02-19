 int minimumDeviation(vector<int>& nums) {
        int n=nums.size();
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                nums[i]*=2;
            }
            s.insert(nums[i]);
            
        }
       
          
        int diff= *s.rbegin() - *s.begin();
        while((int)s.size()
           && *s.rbegin() % 2 == 0){
            int mes=*s.rbegin();
            s.erase(mes);
            mes=mes/2;
            s.insert(mes);
            diff=min(diff,*s.rbegin() - *s.begin());
        }
        
        return diff;
    }
