//Bottom view of BT

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
    vector <int> bottomView(TreeNode *root){
    	queue<pair<TreeNode*, int>> q;
        map<int, TreeNode*> mpp;

        q.push({root, 0});
        while(!q.empty()){
            auto p = q.front();
            q.pop();

            TreeNode* node = p.first;
            int vertical = p.second;

            mpp[vertical] = node;

            if(node->left){
                q.push({node->left, vertical-1});
            }
            if(node->right){
                q.push({node->right, vertical+1});
            }
        } 

        vector<int> ans;
        for(auto it: mpp){
            TreeNode* node = it.second;
            ans.push_back(node->data);
        }
        return ans;
    }
};
