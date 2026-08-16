#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

class Solution{
    int height(TreeNode* node){
        if(node == NULL)
            return 0;
        
        int leftH = height(node->left);
        int rightH = height(node->right);

        return 1 + max(leftH, rightH);
    }
public:
    bool isBalanced(TreeNode *root){
    	if(root == NULL)
            return true;
        
        int leftTree = height(root->left);
        int rightTree = height(root->right);

        if(abs(leftTree - rightTree) > 1)
            return false;
        
        return isBalanced(root->left) && isBalanced(root->right);

    }
};