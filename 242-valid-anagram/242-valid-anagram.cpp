class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for(auto f :freq){
            if(f.second !=0){
                return false;
            }
        }
        return true;
    }
};