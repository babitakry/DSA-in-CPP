#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

class Solution {
    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);
        return 1 + max(left, right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
           return 0;
        int leftH = height(root->left);
        int rightH = height(root->right);

        int currentDiameter = leftH + rightH;

        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        return max(currentDiameter, max(leftDiameter, rightDiameter));
    }
};