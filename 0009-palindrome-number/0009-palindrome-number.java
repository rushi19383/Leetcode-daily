class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        String ans = String.valueOf(x);
        int n = ans.length();
        for(int i=0;i<ans.length()/2;i++){
            if(ans.charAt(i)!=ans.charAt(n-i-1)){
                return false;
            }
        }
        return true;
    }
}