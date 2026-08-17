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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;

        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto front = q.front();
            q.pop();

            TreeNode* node = front.first;

            int col = front.second.first;
            int row = front.second.second;
            nodes[col][row].insert(node->data);

            if (node->left) {
                q.push({node->left, {col - 1, row + 1}});
            }

            if (node->right) {
                q.push({node->right, {col + 1, row + 1}});
            }
        }

        vector<vector<int>> ans;

        for (auto& column : nodes) {
            vector<int> temp;
            for (auto& level : column.second) {
                temp.insert(temp.end(),level.second.begin(),level.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};