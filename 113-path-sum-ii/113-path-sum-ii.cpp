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
    void helper(TreeNode* root,int target,int curr,vector<int>temp,vector<vector<int>>& ans){
        temp.push_back(root->val);
        curr += root->val;
        
        if(curr== target && (!root->left && !root->right)){
		
            ans.push_back(temp);
			
            return;
        }
       
        if(!root->left && !root->right){
			
			
            return;
        }
		
        if(root->left) helper(root->left, target, curr, temp, ans);
        if(root->right) helper(root->right, target, curr, temp, ans);
		
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
         vector<vector<int>> ans;
        if(!root) return ans;
        vector<int> temp;
        helper(root, targetSum, 0, temp, ans);
        return ans;
    }
};