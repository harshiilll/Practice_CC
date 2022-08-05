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
    int maxdia(TreeNode* root, int &maxi){
        if(!root)
            return 0;
        int lh=maxdia(root->left,maxi);
        int rh=maxdia(root->right,maxi);
        maxi=max(maxi,lh+rh);
        return 1+max(rh,lh);
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        maxdia(root,maxi);
        return maxi;
        
    }
};