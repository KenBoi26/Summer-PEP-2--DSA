#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:

    void helper(TreeNode* root, string path, vector<string> &result){
        if(!root) return;

        path += to_string(root->val);

        if(!root->left && !root->right){
            result.push_back(path);
        }else{
            path += "->";
            helper(root->left, path, result);
            helper(root->right, path, result);
        }

    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        
        helper(root, "" ,result);

        return result;

    }
};

int main(){


    return 0;
}