/* Problem url: https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * Code by: ldcduc
 * */

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
    int maxDepth(TreeNode* root) {
        return (root == NULL) ? 0 : max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
/*
 * Comment by ldcduc
 * Suggested tags: binary search trê
 * 
 * */
