#include<iostream>
using namespace std;    

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode*, TreeNode*>> st;
        st.push({p, q});

        while (!st.empty()) {
            auto it = st.top();
            st.pop();

            TreeNode* node1 = it.first;
            TreeNode* node2 = it.second;

            if (node1 == NULL && node2 == NULL)
                continue;

            if (node1 == NULL || node2 == NULL)
                return false;

            if (node1->data != node2->data)
                return false;

            st.push({node1->left, node2->left});
            st.push({node1->right, node2->right});
        }

        return true;
    }
};