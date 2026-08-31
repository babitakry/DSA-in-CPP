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



// Brute Force Approach
class Solution {
    void inorder(TreeNode* root, vector<int> &arr){
        if(root == NULL){
            return ;
        }
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
public:
	vector<int> kLargesSmall(TreeNode* root,int k){
        vector<int> arr;
		inorder(root, arr);

        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        return {arr[k-1], arr[n-k]};
	}
};