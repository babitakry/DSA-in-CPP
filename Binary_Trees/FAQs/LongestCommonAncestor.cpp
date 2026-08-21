//LCA in BT

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

// Brute force approach: Find path of both nodes and then find the last common node in both paths
class Solution {
    TreeNode* findNode(TreeNode* root, int val) {
        if (root == NULL)
            return NULL;

        if (root->data == val)
            return root;

        TreeNode* left = findNode(root->left, val);

        if (left != NULL)
            return left;

        return findNode(root->right, val);
    }
    vector<int> recu(TreeNode* root, vector<int>& path, TreeNode* node) {
        if (root == NULL)
            return {};

        path.push_back(root->data);

        if (root == node)
            return path;

        vector<int> left = recu(root->left, path, node);
        if (!left.empty())
            return left;

        vector<int> right = recu(root->right, path, node);
        if (!right.empty())
            return right;

        path.pop_back();

        return {};
    }

public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> path;

        vector<int> path1 = recu(root, path, p);
        path.clear();
        vector<int> path2 = recu(root, path, q);

        int i = 0;
        int commonAncestorVal = -1;

        while (i < path1.size() && i < path2.size()) {
            if (path1[i] != path2[i])
                break;

            commonAncestorVal = path1[i];
            i++;
        }
        return findNode(root, commonAncestorVal);
    }
};