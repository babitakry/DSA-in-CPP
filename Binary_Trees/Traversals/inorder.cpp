#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

class Solution {
    void inorderTraversal(TreeNode* root, vector<int> &ans){
        if(root == NULL)
            return;
        inorderTraversal(root->left, ans);
        ans.push_back(root->data);
        inorderTraversal(root->right, ans);
    }
   public:
    vector<int> inorder(TreeNode* root) {
        vector<int> ans;
        inorderTraversal(root, ans);
        return ans;
    }
};