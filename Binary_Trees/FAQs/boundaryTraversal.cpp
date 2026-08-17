#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};


class Solution {
    void rightBoundary(TreeNode* root, vector<int>& res) {
        if (root == NULL) 
            return;

        if (root->left == NULL && root->right == NULL) 
            return;

        if (root->right) {
            rightBoundary(root->right, res);
        } else {
            rightBoundary(root->left, res);
        }
        res.push_back(root->data);
    }
    void leaf(TreeNode* root, vector<int>& res) {
        if (root == NULL) return;

        if (root->left == NULL && root->right == NULL) {
            res.push_back(root->data);
            return;
        }
        leaf(root->left, res);
        leaf(root->right, res);
    }
    void leftBoundary(TreeNode* root, vector<int>& res) {
        if (root == NULL) return;

        if (root->left == NULL && root->right == NULL) return;

        res.push_back(root->data);
        if (root->left) {
            leftBoundary(root->left, res);
        } else {
            leftBoundary(root->right, res);
        }
    }

   public:
    vector<int> boundary(TreeNode* root) {
        vector<int> res;
        if(root == NULL)
           return res;

        if(root->left == NULL && root->right == NULL){
            res.push_back(root->data);
            return res;
        }

        res.push_back(root->data);
        leftBoundary(root->left, res);
        leaf(root, res);
        rightBoundary(root->right, res);

        return res;
    }
};