class Solution {
public:
    int len{0};
    void check(string str,vector<string>& arr,int itr){
        if(!isu(str))   return;
        if(str.size()>len)  len = str.size();
        for(int i=itr;i<arr.size();i++){
            check(str+arr[i],arr,i+1);
        }
    }
    bool isu(string word){
        set<char>st;
        for(auto ele:word){
            if(st.find(ele)!= st.end())return false;
            st.insert(ele);
        }
        return true;
    }
    int maxLength(vector<string>& arr) {
        
        check("",arr,0);
        return len;
    }
    
};