// 2385. Amount of Time for Binary Tree to Be Infected

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
    TreeNode* findNode(TreeNode* root, int val){
        if(root == NULL || root->data == val){
            return root;
        }

        TreeNode* left = findNode(root->left, val);
        if(left != NULL){
            return left;
        }

        return findNode(root->right, val);
    }
    void makeParent(TreeNode* root,
                    unordered_map<TreeNode*, TreeNode*>& parent_track) {
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
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*, TreeNode*> parent_track;
        makeParent(root, parent_track);

        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;

        TreeNode* startNode = findNode(root, start);
        q.push(startNode);
        visited[startNode] = true;

        int dist = 0;
        while (!q.empty()) {
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
            dist += 1;
        }
        return dist-1;
    }
};