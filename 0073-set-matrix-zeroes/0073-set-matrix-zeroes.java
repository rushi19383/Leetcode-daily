class Solution {
    public void helper(int i,int j,int m,int n,int[][] mat){
        for(int t=0;t<n;t++){
            if(mat[i][t]!=0){
                 mat[i][t]=951;
            }
           
        }
        for(int t=0;t<m;t++){
            if(mat[t][j]!=0){
                 mat[t][j]=951;
            }
           
        }
    }
    public void setZeroes(int[][] mat) {
        int n = mat[0].length;
        int m = mat.length;
        
        for(int i=0;i<m;i++ ){
            for(int j=0;j<n;j++){
                if(mat[i][j] ==0){
                    helper(i,j,m,n,mat);
                }
            }
        }
        for(int i=0;i<m;i++ ){
            for(int j=0;j<n;j++){
                if(mat[i][j] ==951){
                   mat[i][j]=0;
                }
            }
        }


    }
}