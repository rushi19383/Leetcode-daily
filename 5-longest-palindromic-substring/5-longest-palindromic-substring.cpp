class Solution {
public:
    string longestPalindrome(string s) {

        
//         //odd length
//         for(int i=0;i<n-1;i++){
//             int l =i,r=i;
//             while(l>=0 && r<n){
//                 if(s[l]==s[r]){
//                     l--;r++;
                    
//                 }else{
//                     break;
//                 }
//             }
//             int len = r-l-1;
//             if(len>max_len){
//                 max_len = len;
//                 st=l+1;
//                 end=r-1;
//             }
//         }
//         
//          //even length
//         for(int i=0;i<n-1;i++){
//             int l =i,r=i+1;
//             while(l>=0 && r<n){
//                 if(s[l]==s[r]){
//                     l--;r++;
                    
//                 }else{
//                     break;
//                 }
//             }
//             int len = r-l-1;
//             if(len>max_len){
//                 max_len = len;
//                 st=l+1;
//                 end=r-1;
//             }
//         }
//         return s.substr(st,max_len);

//         if(s.length()<=1) return s;
//         int max_len=1;
//         int n=s.length();
//         int st=0,end=0;
        if(s.length()<=1) return s;
        int n=s.length();
        int st=0;int end=0;
        int max_len=1;
        
        for(int i=0;i<n-1;i++){
            int r=i;int l=i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                    
                }else{
                    break;
                }
                int len =r-l-1;
                if(len>max_len){
                    max_len = len;
                    st=l+1;
                    end=r-1;
                }
            }
        }
             for(int i=0;i<n-1;i++){
            int r=i+1;int l=i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;
                    
                }else{
                    break;
                }
                int len =r-l-1;
                if(len>max_len){
                    max_len = len;
                    st=l+1;
                    end=r-1;
                }
            }
        }
             return s.substr(st,max_len);
            // return s.substr(st,max_len);
    }
};