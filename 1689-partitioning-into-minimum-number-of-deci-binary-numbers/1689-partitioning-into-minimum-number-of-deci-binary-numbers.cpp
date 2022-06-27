class Solution {
public:
    int minPartitions(string n) {
        int max=INT_MIN;
        
        for(char v:n){
            string s="";
            s.push_back(v);
            int m= stoi(s);
            if(m>max){
                max=m;
            }
            
        }
        return max;
    }
};