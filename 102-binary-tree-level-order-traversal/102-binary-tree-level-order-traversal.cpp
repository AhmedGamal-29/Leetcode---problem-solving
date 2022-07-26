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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> res;
        
        if(root==nullptr)
            return res;
        
        queue<TreeNode* > q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            vector<int> values;
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                values.push_back(node->val);
                
                //left child
                if(node->left)
                    q.push(node->left);
                
                //right child
                if(node->right)
                    q.push(node->right);
                
            }
            
            //add vector of values to vector of vectors
            res.push_back(values);   
            
        }
        
        
        return res;
    }
};