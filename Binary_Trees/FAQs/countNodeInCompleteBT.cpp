//222. Count Complete Tree Nodes 

// Design an algorithm that runs in less than O(n) time complexity.



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
    int leftHeight(TreeNode* root) {
        int height = 0;
        while(root != NULL){
            height++;
            root = root->left;
        }

        return height;
    }

    int rightHeight(TreeNode* root) {
        int height = 0;
        while(root != NULL){
            height++;
            root = root->right;
        }

        return height;
    }
public:
    int countNodes(TreeNode* root) {
        if (root == NULL) 
            return 0;

        int lefSubTreeHeight = leftHeight(root);
        int rightSubTreeHeight = rightHeight(root);

        if (lefSubTreeHeight == rightSubTreeHeight) {
            return pow(2, lefSubTreeHeight) - 1;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};