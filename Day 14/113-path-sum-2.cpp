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

    void get_path(TreeNode* root, int targetSum, vector<int> path, int sum, vector<vector<int>> &result){
        if(!root) return;
        path.push_back(root->val);
        if(!root->left && !root->right && sum+root->val == targetSum){
            result.push_back(path);
        }
        
        get_path(root->left, targetSum, path, sum+root->val, result);

        get_path(root->right, targetSum, path, sum+root->val, result);

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        if(!root) return {};
        
        if(root->val == targetSum && !root->left && !root->right) return {{root->val}};
        
        get_path(root, targetSum, {}, 0, result);
        

        return result;
    }
};

int main(){


    return 0;
}