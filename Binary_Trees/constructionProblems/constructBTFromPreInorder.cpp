// Construct a BT from Preorder and Inorder

#include<iostream>
#include<map>
#include<set>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

class Solution {
   public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // Base case
        if (preorder.empty() || inorder.empty()) 
            return NULL;

        int rootValue = preorder[0];

        int index = 0;

        // Find root in inorder
        for (int i = 0; i < inorder.size(); i++) {
            if (rootValue == inorder[i]) {
                index = i;
                break;
            }
        }

        // Create root
        TreeNode* root = new TreeNode(rootValue);

        // Left inorder
        vector<int> leftInorder(inorder.begin(), inorder.begin() + index);

        // Right inorder
        vector<int> rightInorder(inorder.begin() + index + 1, inorder.end());

        // Left preorder
        vector<int> leftPreorder(preorder.begin() + 1, preorder.begin() + 1 + index);

        // Right preorder
        vector<int> rightPreorder(preorder.begin() + 1 + index, preorder.end());

        root->left = buildTree(leftPreorder, leftInorder);
        root->right = buildTree(rightPreorder, rightInorder);

        return root;
    }
};
