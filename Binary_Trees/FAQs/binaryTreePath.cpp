// 257. Binary Tree Paths

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
    void recu(TreeNode* root, string path, vector<string>& ans) {
        if (root == NULL)
            return;

        path += to_string(root->data);

        if (root->left == NULL && root->right == NULL) {
            ans.push_back(path);
            return;
        }

        path += "->";

        recu(root->left, path, ans);
        recu(root->right, path, ans);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;

        recu(root, "", ans);

        return ans;
    }
};