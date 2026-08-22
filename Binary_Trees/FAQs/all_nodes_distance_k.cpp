// 863. All Nodes Distance K in Binary Tree

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
    void makeParent(TreeNode* root,
                    unordered_map<TreeNode*, TreeNode*>&parent_track) {
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node->left) {
                parent_track[node->left] = node;
                q.push(node->left);
            }
            if (node->right) {
                parent_track[node->right] = node;
                q.push(node->right);
            }
        }
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent_track;
        makeParent(root, parent_track);

        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;

        q.push(target);
        visited[target] = true;

        int dist = 0;
        while (!q.empty()) {
            if (dist == k) {
                break;
            }
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                if(node->left && !visited[node->left]){
                    visited[node->left] = true;
                    q.push(node->left);
                }
                if(node->right && !visited[node->right]){
                    visited[node->right] = true;
                    q.push(node->right);
                }
                if(parent_track[node] && !visited[parent_track[node]]){
                    visited[parent_track[node]] = true;
                    q.push(parent_track[node]);
                }
            }
            dist++;
        }
        vector<int> ans;
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            ans.push_back(node->data);
        }
        return ans;
    }
};