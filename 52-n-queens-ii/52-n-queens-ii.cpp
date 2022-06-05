class Solution {
public:
     vector<string>a;
    vector<vector<string>> ans;
    bool isValid(int n ,int row,int col){
        int total=0;
        for(int i=0;i<n;i++){
            if(a[row][i]=='Q'){
                total++;
                
                    
                    
            }
        }
        if(total>0){
            return false;
        }
        for(int i=0;i<n;i++){
            if(a[i][col]=='Q'){
                total++;
            }
            
        }
        if(total>0){
            return false;
        }
        for(int i=0;i<n;i++){
            if(row+i<n && col+i<n){
                if(a[row+i][col+i]=='Q'){
                    total++;
                }
            }else{
                break;
            }
        }
        if(total>0){
            return false;
        }
        for(int i=0;i<n;i++){
            if(row-i>=0 && col-i>=0){
                if(a[row-i][col-i]=='Q'){
                    total++;
                }
            }else{
                break;
            }
        }
        if(total>0){
            return false;
        }
        
        
        for(int i =0;i<n;i++){
            if(row+i<n && col-i>=0){
                if(a[row+i][col-i]=='Q'){
                    total++;
                }
            }else{
                break;
            }
            
        }
        if(total>0){
            return false;
        }
        for(int i=0;i<n;i++){
            if(row-i>=0 && col+i<n){
                if(a[row-i][col+i]=='Q'){
                    total++;
                }
            }else{
                break;
            }
        }
        if(total>0){
            return false;
        }
        
        return true;
    }
    void helper(int n,int rowNo){
        if(rowNo == n){
            ans.push_back(a);
            return ;
        }
        for(int i=0;i<n;i++){
            if(isValid(n,rowNo,i)){
                a[rowNo][i] ='Q';
                helper(n,rowNo+1);
                a[rowNo][i]='.';
            }
        }
        return;
        
    }
    int totalNQueens(int n) {
         string start = "";
        for(int i=0;i<n;i++){
            start = start+".";
            
        }
        a=vector<string>(n,start);
        helper(n,0);
        return ans.size();
    }
};
// class Solution {
// public:
//     vector<string>a;
//     vector<vector<string>> ans;
//     bool isValid(int n ,int row,int col){
//         int total=0;
//         for(int i=0;i<n;i++){
//             if(a[row][i]=='Q'){
//                 total++;
                
                    
                    
//             }
//         }
//         if(total>0){
//             return false;
//         }
//         for(int i=0;i<n;i++){
//             if(a[i][col]=='Q'){
//                 total++;
//             }
            
//         }
//         if(total>0){
//             return false;
//         }
//         for(int i=0;i<n;i++){
//             if(row+i<n && col+i<n){
//                 if(a[row+i][col+i]=='Q'){
//                     total++;
//                 }
//             }else{
//                 break;
//             }
//         }
//         if(total>0){
//             return false;
//         }
//         for(int i=0;i<n;i++){
//             if(row-i>=0 && col-i>=0){
//                 if(a[row-i][col-i]=='Q'){
//                     total++;
//                 }
//             }else{
//                 break;
//             }
//         }
//         if(total>0){
//             return false;
//         }
        
        
//         for(int i =0;i<n;i++){
//             if(row+i<n && col-i>=0){
//                 if(a[row+i][col-i]=='Q'){
//                     total++;
//                 }
//             }else{
//                 break;
//             }
            
//         }
//         if(total>0){
//             return false;
//         }
//         for(int i=0;i<n;i++){
//             if(row-i>=0 && col+i<n){
//                 if(a[row-i][col+i]=='Q'){
//                     total++;
//                 }
//             }else{
//                 break;
//             }
//         }
//         if(total>0){
//             return false;
//         }
        
//         return true;
//     }
//     void helper(int n,int rowNo){
//         if(rowNo == n){
//             ans.push_back(a);
//             return ;
//         }
//         for(int i=0;i<n;i++){
//             if(isValid(n,rowNo,i)){
//                 a[rowNo][i] ='Q';
//                 helper(n,rowNo+1);
//                 a[rowNo][i]='.';
//             }
//         }
//         return;
        
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         string start = "";
//         for(int i=0;i<n;i++){
//             start = start+".";
            
//         }
//         a=vector<string>(n,start);
//         helper(n,0);
//         return ans;
//     }
// };