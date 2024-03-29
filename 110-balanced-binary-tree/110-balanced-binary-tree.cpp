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
    int height(TreeNode* root,bool& flag){
        if(root==NULL)
            return 0;
        
        int lh=height(root->left,flag);
        int rh=height(root->right,flag);
        
        if(abs(rh-lh)>1)
            flag=false;
        
        return 1+max(rh,lh);
    }
    
    bool isBalanced(TreeNode* root) {
        bool flag = true;
        height(root,flag);
        return flag;
    }
};