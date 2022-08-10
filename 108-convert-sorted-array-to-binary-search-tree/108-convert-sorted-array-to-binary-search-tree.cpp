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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         // return NULL TreeNode if num is empty
    if(!nums.size()) return NULL;

    int mid = nums.size()/2;
    TreeNode* head = new TreeNode(nums[mid]);
    
    // subvector left and right
    vector<int> l(nums.begin(), nums.begin()+mid);
    vector<int> r(nums.begin()+mid+1, nums.end());
    
    // set tree (using recursive)
    head->left  = sortedArrayToBST(l);
    head->right = sortedArrayToBST(r);
    
    return head;
    }
};