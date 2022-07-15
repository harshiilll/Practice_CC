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
    TreeNode* helper(vector<int>&pre, vector<int>&in, int inS, int inE, int preS, int preE){
    
    if(inS>inE) return NULL;
    
    int rootdata=pre[preS];
    int rootindex=-1;
    for(int i=inS;i<=inE;i++){
        if(rootdata==in[i]){
            rootindex=i;
            break;
        }
    }
    
    int LinS=inS, LinE=rootindex-1, LpreS=preS+1, LpreE=LinE-LinS+LpreS;
    int RinS=rootindex+1, RinE=inE, RpreS=LpreE+1, RpreE=preE;
    
    TreeNode* root=new TreeNode(rootdata);
    root->left=helper(pre,in,LinS,LinE,LpreS,LpreE);
    root->right=helper(pre,in,RinS,RinE,RpreS,RpreE);
    return root;        
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int n=preorder.size();
    return helper(preorder, inorder, 0, n-1, 0,n-1);
}
};