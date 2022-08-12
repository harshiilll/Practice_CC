/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    bool dfs(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode*& lca) {
        if(!root || lca) return false;
        
        bool left = dfs(root->left, p, q, lca);
        bool right = dfs(root->right, p, q, lca);
        
        bool cur = false;
        if(root == p || root == q) {
            cur = true;
        }
        if(left + right + cur >= 2) {
            lca = root;
            return false;
        }
        return left || right || cur;   
    }
    
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = nullptr;
        dfs(root, p, q, ans);
        
        return ans;
    }
};