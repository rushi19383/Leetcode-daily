#include<bits/stdc++.h>
class Solution {
public:
    bool helper(vector<vector<char>>& board, string word,int i,int c,int r,vector<pair<int,int>>&path){
        if(i==word.size())return true;
        if(r<0 || c<0 || r>=board.size() || c>=board[0].size()||board[r][c]!=word[i]|| find(path.begin(), path.end(), std::make_pair(r, c))!= path.end()){
            return false;
        }
        path.push_back({r,c});
        bool res = helper(board,word,i+1,c+1,r,path) || helper(board,word,i+1,c-1,r,path) ||helper(board,word,i+1,c,r+1,path)||helper(board,word,i+1,c,r-1,path);
        path.erase(remove(path.begin(), path.end(),std::make_pair(r, c)), path.end());
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                vector<pair<int,int>>path;
                if(helper(board,word,0,j,i,path))return true;
            }
        }
        return false;
    }
};