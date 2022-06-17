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
    int count=0;
    //1 for want 
    //2 for ok
    //3 for provide
    int minCameraCover(TreeNode* root) {
        int a =find(root);
        if(a == 1){
            count++;
        }
        return count;
    }
    int find(TreeNode* root){
        if(root==NULL)return 2;
        int a=find(root->left);
        int b=find(root->right);
        
        if(a==1 || b==1){
            count++;
            return 3;
        }else  if(a==3 || b==3){
            return 2;
        }
        return 1;
        
    }
};