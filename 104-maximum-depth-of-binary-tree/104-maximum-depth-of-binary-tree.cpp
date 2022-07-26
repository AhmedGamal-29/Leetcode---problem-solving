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
    int maxDepth(TreeNode* root) 
    {
       if(root==nullptr)
            return 0;
       
        //right subtree
        int right_depth = maxDepth(root->right);
        
        //left subtree
        int left_depth = maxDepth(root->left);
        
        //return larger + root itself
        return right_depth>left_depth ?right_depth+1 :left_depth+1;
    }
    
};