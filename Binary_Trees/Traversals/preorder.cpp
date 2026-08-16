#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

class Solution {
    void preorderTraversal(TreeNode* root, vector<int> &ans){
        if(root == NULL)
            return;
        ans.push_back(root->data);
        preorderTraversal(root->left, ans);
        preorderTraversal(root->right, ans);
    }
   public:
    vector<int> preorder(TreeNode* root) {
        vector<int> ans;
        preorderTraversal(root, ans);
        return ans;
    }
};