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
    bool isSymmetric(TreeNode* root) {
        
        if(root==nullptr)
            return true;
        
        return symm(root->left, root->right);
        
    }
    
    bool symm(TreeNode* l, TreeNode* r)
    {
        // null in both
        if(l==nullptr && r==nullptr)
            return true;
        
        //one null, other has value
        if(l==nullptr || r==nullptr)
            return false;
        
        //value of both isn't symmetric
        if(l->val != r->val)
            return false;
        
        return symm(l->left, r->right) && symm(l->right, r->left);
    }
};