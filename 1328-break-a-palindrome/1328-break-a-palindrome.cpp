class Solution {
public:
    string breakPalindrome(string p) {
        int s= 0;
        int e=p.size()-1;
        
        if(p.size() <= 1)   return "";
        while(s<e){
            if(p[s] != 'a' && p[e] != 'a'){
                p[s] = 'a';
                return p;
            }else{
                s++;
                e--;
            }
        }
        p[p.size()-1] = 'b';
        return p;
    }
};