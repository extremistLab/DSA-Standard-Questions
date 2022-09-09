||========================================================>Solution<======================================================================||

Runtime: 17 ms, faster than 36.94% of C++ online submissions for Maximum Depth of Binary Tree.
Memory Usage: 18.8 MB, less than 89.27% of C++ online submissions for Maximum Depth of Binary Tree.
  
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight)+1;
    }
};
  