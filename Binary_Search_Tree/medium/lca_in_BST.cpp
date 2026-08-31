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
        if(root == NULL)
            return NULL;
        
        while(root != NULL){
            if(root->data == val){
                return root;
            }
            else if(root->data > val){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        
        return NULL;

    }

    vector<int> findPath(TreeNode* root, vector<int> &path, TreeNode* node){
        if(root == NULL)
            return {};
        
        path.push_back(root->data);
        if(root == node)
            return path;
        
        vector<int> left = findPath(root->left, path, node);
        if(!left.empty())
            return left;
        
        vector<int> right = findPath(root->right, path, node);
        if(!right.empty())
            return right;
        
        path.pop_back();

        return {};
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> path;

        vector<int> path1 = findPath(root, path, p);
        for(int i = 0; i < path1.size(); i++){
            cout<< path1[i] << " ";
        }
        cout<<"\n";
        path.clear();
        vector<int> path2 = findPath(root, path, q);
        for(int i = 0; i < path2.size(); i++){
            cout<< path2[i] << " ";
        }

        int i = 0;
        int commonAncestorVal = -1;
        while(i < path1.size() && i < path2.size()){
            if(path1[i] != path2[i]){
                break;
            }
            commonAncestorVal = path1[i];
            i++;
        }
        return findNode(root, commonAncestorVal);
    }
};