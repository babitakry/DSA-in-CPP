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
    TreeNode* searchBST(TreeNode* root, int val) {
    	TreeNode* node = root;

        while(node != NULL){
            if(node->data == val){
                return node;
            }
            else if(node->data > val){
                node = node->left;
            }
            else{
                node = node->right;
            }
        }
        return NULL;
    }
};