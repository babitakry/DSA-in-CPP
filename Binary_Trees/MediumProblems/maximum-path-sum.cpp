#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};


class Solution {
    int pathSum(TreeNode* root, int &maxi) {
        if (root == NULL) return 0;

        int left =  pathSum(root->left, maxi);
        int right = pathSum(root->right, maxi);
        int sum = left + root->data + right;
        maxi = max(maxi, sum);
        return max(left, right) + root->data;
    }

   public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        pathSum(root, maxi);
        return maxi;
    }
};