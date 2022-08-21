class Solution {
public:
    string largestPalindromic(string num) {
         vector<int> v(10);
        for(auto x: num) v[x-'0']++;
        
        string p = "", q = "";
       
        for(int i=v.size()-1; i>=0; i--){
            while(v[i]>=2){
                if(i==0 && p.size()==0) break;
                p += i+'0';
                q += i+'0';
                v[i] -= 2;
            }
        }
        
        for(int i=v.size()-1; i>=0; i--){
            if(v[i]>0){
                p += i+'0';
                break;
            }
        }
        reverse(q.begin(), q.end());
        p+=q;
        return p;
    }
};