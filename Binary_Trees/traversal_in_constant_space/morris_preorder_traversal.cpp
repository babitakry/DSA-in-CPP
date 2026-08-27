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
    vector<int> preorder(TreeNode* root) {
        vector<int> preorder;

        TreeNode* curr = root;
        while (curr != NULL) {
            if (curr->left == NULL) {
                preorder.push_back(curr->data);
                curr = curr->right;
            } 
            else {
                TreeNode* prev = curr->left;
                while (prev->right && prev->right != curr) {
                    prev = prev->right;
                }
                // establish connection
                if (prev->right == NULL) {
                    prev->right = curr;
                    preorder.push_back(curr->data);
                    curr = curr->left;
                }
                if (prev->right == curr) {
                    prev->right = NULL;
                    curr = curr->right;
                }
            }
        }
        return preorder;
    }
};