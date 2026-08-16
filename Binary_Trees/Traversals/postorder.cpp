#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

class Solution {
    void postorderTraversal(TreeNode* root, vector<int> &ans){
        if(root == NULL)
            return;
        postorderTraversal(root->left, ans);
        postorderTraversal(root->right, ans);
        ans.push_back(root->data);
    }
    vector<int> postorder(TreeNode* root) {
        vector<int> ans;
        postorderTraversal(root, ans);
        return ans;
    }
};
