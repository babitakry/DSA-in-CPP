// Floor and Ceil in a BST

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

class Solution{	
    int findFloor(TreeNode* root, int key){
        int floor = -1;
        while(root != NULL){
            if(root->data <= key){
                floor = root->data;
                root = root->right;
            }
            else{
                root = root->left;
            }
        }
        return floor;
    }

    int findCeil(TreeNode* root, int key){
        int ceil = -1;

        while(root != NULL){
            if(root->data >= key){
                ceil = root->data;
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        return ceil;
    }
	public:
		vector<int> floorCeilOfBST(TreeNode* root,int key){
			TreeNode* node = root;

            int floor = findFloor(node, key);
            int ceil = findCeil(node, key);

            return {floor , ceil};
		}
};