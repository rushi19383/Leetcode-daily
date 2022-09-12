class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(begin(tokens), end(tokens));
        int max_score = 0;
        int score = 0;
        int s = 0;
        int p = size(tokens) - 1;
        while (s <= p) {
           
            
            
            if (tokens[s] <= power) {
                power -= tokens[s];
                ++score;
                ++s;
           
                
            } else if (score > 0) {
                power += tokens[p];
                --score;
                --p;
            } else {
                break;
            }
            max_score = max(max_score, score);
        }
        return max_score;
        
    }
};