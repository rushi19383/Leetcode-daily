class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<int,vector<int>>m;
        int count =0;
        int i=0;
        for(auto x:s){
            m[x].push_back(i++);
            
        }
        for(int i=0;i<words.size();i++){
            string w = words[i];
            int pre = -1;
            for(int j=0;j<w.size();j++){
                auto it = upper_bound(m[w[j]].begin(),m[w[j]].end(),pre);
                if(it == m[w[j]].end()) break;
                pre  = *it;
                if(j==(w.size()-1)) count++;
            }
        }
        return count;
    }
};