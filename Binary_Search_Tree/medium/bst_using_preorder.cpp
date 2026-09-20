#include<iostream>
using namespace std; 


struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

// Better Approach : Using Preorder and Inorder Traversal
class Solution {
    TreeNode* bstFromPreorderInorder(vector<int>& preorder, vector<int> &inorder){
        if(preorder.empty() || inorder.empty()){
            return NULL;
        }

        int rootVal = preorder[0];

        int index = -1;
        for(int i = 0; i < inorder.size(); i++){
            if(rootVal == inorder[i]){
                index = i;
                break;
            }
        }

        TreeNode* root = new TreeNode(rootVal);

        vector<int> leftInorder (inorder.begin(), inorder.begin() + index);
        vector<int> rightInorder (inorder.begin() + index + 1, inorder.end());

        vector<int> leftPreorder (preorder.begin() + 1,  preorder.begin() + 1 + index);
        vector<int> rightPreorder (preorder.begin() + 1 + index, preorder.end());

        root->left = bstFromPreorderInorder(leftPreorder, leftInorder);
        root->right = bstFromPreorderInorder(rightPreorder, rightInorder);

        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder = preorder;
        sort(inorder.begin(), inorder.end());

        return bstFromPreorderInorder(preorder, inorder);
    }
};


// Optimal Approach : Using Preorder Traversal Only
class Solution {
    TreeNode* build(vector<int> &preorder, int &i, int bound){
        int n = preorder.size();

        if(i == n || preorder[i] > bound){
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[i]);
        i++;

        root->left = build(preorder, i, root->data);
        root->right = build(preorder, i, bound);

        return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return build(preorder, i, INT_MAX);
    }
};