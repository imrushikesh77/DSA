class Solution {
public:
    int maxHeight = 1;
    int currHeight = 1;
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            maxHeight = max(currHeight - 1, maxHeight);
            currHeight = 1;
            return 0;
        }
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        maxHeight = max(currHeight + max(leftDepth, rightDepth) - 1, maxHeight);
        currHeight = max(leftDepth, rightDepth) + 1;
        return max(leftDepth, rightDepth) + 1;
    }
};