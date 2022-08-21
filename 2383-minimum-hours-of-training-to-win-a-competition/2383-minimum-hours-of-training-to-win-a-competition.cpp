class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
         int n=energy.size();
        int sum=0 ;
        int reqEnergy=1;
        for(int i=0 ; i<n ; i++){
            int temp=experience[i];
            experience[i]=experience[i]-sum;
            sum+=temp;
            reqEnergy+=energy[i];
        }
        int ans1=0;
        if(reqEnergy>initialEnergy){
            ans1=reqEnergy-initialEnergy;
        }
        else{
            ans1=0;
        }
        // cout<<reqEnergy;
        
        sum=*max_element(experience.begin(),experience.end())+1;
        
        if(sum>=initialExperience){
            sum=sum-initialExperience;
        }
        else{
            sum=0;
        }
        
        int ans=ans1+sum;
        return ans;
    }
};