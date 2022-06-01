class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pr=-1;
        int c=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<t.length();j++){
                if(s[i]==t[j] && pr<j){
                    pr=j;
                    c++;
                    break;
                }
            }
            
        }
        if(c==s.length()){
            return true;
        }else{
            return false;
        }
    }
};