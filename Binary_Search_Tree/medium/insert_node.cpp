// Insert a given node in BST
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
    TreeNode* insert(TreeNode* node, int val){
        if(node == NULL)
            return new TreeNode(val);
        
        if(val < node->data){
            node->left = insert(node->left, val);
        }
        else if(val > node->data){
            node->right = insert(node->right, val);
        }

        return node;
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insert(root, val);
    }
};