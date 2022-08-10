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
  //  auto it = vector<int>>::const_iterator;
//     TreeNode* convert(auto beg,auto end){
//         if(beg >= end)  return nullptr;
        
//         const auto mid = beg+(end - beg)/2;
//         return new TreeNode(*mid, convert(beg,mid),convert(mid+1,end));
        
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         return convert(nums.cbegin(),nums.cend());
//     }
    
    using it = vector<int>::const_iterator;
    TreeNode* convert(it beg, it end) {
        if (beg >= end) return nullptr;
        
        const auto mid = beg + (end - beg)/2;
        return new TreeNode(*mid, convert(beg, mid), convert(mid+1, end));
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums.cbegin(), nums.cend());
    }
};