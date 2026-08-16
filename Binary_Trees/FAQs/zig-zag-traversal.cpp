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
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue< TreeNode* > q;
        q.push(root);

        int levelNo = 0;
        while(!q.empty()){
            int n = q.size();
            vector<int> level;

            for(int i = 0; i < n; i++){
                TreeNode* node = q.front();
                q.pop();

                if(node->left != NULL)
                   q.push(node->left);
                
                if(node->right != NULL)
                    q.push(node->right);
                
                level.push_back(node->data);
            }
            if(levelNo % 2 == 0){
                ans.push_back(level);
            }
            else{
                reverse(level.begin(), level.end());
                ans.push_back(level);
            }
            levelNo++;
        }
        return ans;
    }
};