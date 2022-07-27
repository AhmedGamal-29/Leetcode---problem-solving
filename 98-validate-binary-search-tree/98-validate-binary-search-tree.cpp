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
    bool isValidBST(TreeNode* root) 
    {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
    
    bool check(TreeNode* root,long min, long max){
        if(root == nullptr)
            return true;

        if(root->left)
        {
            if(root->left->val >= root->val || root->left->val<=min)
            {
                return false;
            }
        }
        if(root->right)
        {
            if(root->right->val <= root->val || root->right->val>=max)
            {
                return false;
            }
        }
        
        return check(root->left,min,root->val) && check(root->right,root->val,max);
    }
};