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


// Optimized approach: 
//Recursively check if the current node is either p or q,
// if yes return the current node. If not, check for p and q in left and right subtrees. 
// If both left and right return non-null values, then the current node is the LCA. 
// If only one of them returns a non-null value, return that value.

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root == p || root == q) {
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
        if (left == NULL) {
            return right;
        } else if (right == NULL) {
            return left;
        } else { 
            return root;
        }
    }
};