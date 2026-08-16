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
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        queue<TreeNode* > q;
        q.push(root);

        int level = 0;
        while(!q.empty()){
            int size = q.size();

            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();

                if(node->left != NULL)
                    q.push(node->left);
                
                if(node->right != NULL)
                    q.push(node->right);
            }
            level++ ;
        }
        return level;
    }
};