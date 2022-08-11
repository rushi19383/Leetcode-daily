/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> modes;
    int curr = INT_MIN;
    int count =0;
    int max_count = 0;
    
    void helper(int val){
        if(val != curr){
            curr =val;
            count =1;
            
        }else{
            count++;
            
        }
        if(max_count<count){
            modes = {val};
            max_count = count;
            
        }else if(max_count == count){
            modes.push_back(val);
        }
    }
    
    vector<int> findMode(TreeNode* root) {
        if(root==NULL)
            return modes;
        
       
        findMode(root->left);
        helper(root->val);
        findMode(root->right);
        
        return modes;
    }
    
};