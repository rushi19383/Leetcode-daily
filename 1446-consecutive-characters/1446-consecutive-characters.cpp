class Solution {
public:
    int maxPower(string s) {
        char prev =s[0] ;
        int cnt=1;
        int max_count= INT_MIN;
        
        for(int i=1;i<s.size();i++){
            if(s[i]==prev){
                cnt++;
            }else{
                prev=s[i];
                if(cnt>max_count){
                    max_count= cnt;
                }
                cnt =1;
                
            }
        }
         if(cnt>max_count){
                    max_count= cnt;
                }
        return max_count;
    }
};