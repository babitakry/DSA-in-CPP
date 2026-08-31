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
    TreeNode* findLastRight(TreeNode* root){
        if(root->right == NULL){
            return root;
        }
        return findLastRight(root->right);
    }
    TreeNode* helper(TreeNode* root) {
        if(root->left == NULL){
            return root->right;
        }
        else if(root->right == NULL){
            return root->left;
        }

        TreeNode* rightChild = root->right;
        TreeNode* lastRight = findLastRight(root->left);
        lastRight->right = rightChild;

        return root->left;
    }

   public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return NULL;
        }
        if(root->data == key){
            return helper(root);
        }

        TreeNode* dummy = root;
        while(root != NULL){
            if(root->data > key){
                if(root->left != NULL && root->left->data == key){
                    root->left = helper(root->left);
                    break;
                }
                else{
                    root = root->left;
                }
            }
            else{
                if(root->right != NULL && root->right->data == key){
                    root->right = helper(root->right);
                    break;
                }
                else{
                    root = root->right;
                }
            }
        }

        return dummy;
    }
};