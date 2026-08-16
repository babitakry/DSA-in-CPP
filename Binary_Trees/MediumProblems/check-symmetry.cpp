
#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};


class Solution {
    bool inorder(TreeNode* root1,TreeNode* root2){
        if (root1 == NULL && root2 == NULL)
            return true;
            
        if(root1 == NULL || root2 == NULL) 
            return false;

        if(root1->data != root2->data)
            return false;
        
        bool left = inorder(root1->left, root2->right);
        bool right = inorder(root1->right, root2->left);

        return left && right;
    }
public:
    bool isSymmetric(TreeNode* root) {
        return inorder(root->left, root->right);
    }
};