// 662. Maximum Width of Binary Tree

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
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;

        long long ans = 0;

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int n = q.size();

            long long minIndex = q.front().second;

            long long firstIndex = 0;
            long long lastIndex = 0;

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front().first;
                long long index = q.front().second;

                q.pop();

                // Normalize index for this level
                index = index - minIndex;

                if (i == 0)
                    firstIndex = index;

                if (i == n - 1)
                    lastIndex = index;

                if (node->left)
                    q.push({node->left, index * 2 + 1});

                if (node->right)
                    q.push({node->right, index * 2 + 2});
            }

            ans = max(ans, lastIndex - firstIndex + 1);
        }

        return ans;
    }
};