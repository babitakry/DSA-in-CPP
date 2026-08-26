// 297. Serialize and Deserialize Binary Tree


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

class Codec {
    string getValue(string &data, int &i){
        string value = "";

        while(i < data.size() && data[i] != ','){
            value += data[i];
            i++;
        }
        i++; // skip ','

        return value;
    }
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = "";

        if(root == NULL)
            return s;
            
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            if(node == NULL){
                s += "#,";
            }
            else{
                q.push(node->left);
                q.push(node->right);
                s += to_string(node->data) + ",";
            }
        }

        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0)
            return NULL;
        
        int i = 0;
        string value = getValue(data, i);
        
        TreeNode* root = new TreeNode(stoi(value));

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            value = getValue(data, i);
            if(value != "#"){
                node->left = new TreeNode(stoi(value));
                q.push(node->left);
            }

            value = getValue(data, i);
            if(value != "#"){
                node->right = new TreeNode(stoi(value));
                q.push(node->right);
            }
        }

        return root;
    }
};
