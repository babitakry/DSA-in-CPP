//199. Binary Tree Right Side View


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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return {};
        queue< pair<TreeNode*, int> > q;
        map< int, TreeNode*> mpp;

        q.push({root, 0});
        while(!q.empty()){
            auto p = q.front();
            q.pop();

            TreeNode* node = p.first;
            int level = p.second;

            mpp[level] = node;

            if(node->left)
                q.push({node->left, level+1});
            if(node->right)
                q.push({node->right, level+1});
        } 

        vector<int> ans;
        for(auto it: mpp){
            TreeNode* node = it.second;
            ans.push_back(node->data);
        }

        return ans;
    }
};