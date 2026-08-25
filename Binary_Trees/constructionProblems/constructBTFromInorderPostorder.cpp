// 106. Construct Binary Tree from Inorder and Postorder Traversal

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty() && postorder.empty()){
            return NULL;
        }

        int rootVal = postorder.back();
        int index = 0;

        for(int i = 0; i < inorder.size(); i++){
            if(inorder[i] == rootVal){
                index = i;
                break;
            }
        }

        TreeNode* root = new TreeNode(rootVal);

        vector<int> leftTreeInorder(inorder.begin(), inorder.begin()+index);
        vector<int> leftTreePostorder(postorder.begin(), postorder.begin()+index);
       
        vector<int> rightTreeInorder(inorder.begin()+index+1, inorder.end());
        vector<int> rightTreePostorder(postorder.begin()+index, postorder.end()-1);
        
        root->left = buildTree(leftTreeInorder, leftTreePostorder);
        root->right = buildTree(rightTreeInorder, rightTreePostorder);

        return root;
    }
};