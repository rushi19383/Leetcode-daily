class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         vector<string> codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> ans;
        for(auto word:words){
            string curr = "";
            for(auto ch:word){
                curr +=codes[ch-97];
            }
            ans.insert(curr);
        }
        return ans.size();
    }
};