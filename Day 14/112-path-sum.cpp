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
    bool hasPathSum(TreeNode* root, int targetSum, int sum = 0) {
        if(!root) return false;

        if(sum+root->val == targetSum && !root->left && !root->right) return true;

        return hasPathSum(root->left, targetSum, sum+root->val) || hasPathSum(root->right, targetSum, sum+root->val);
        
    }
};

int main(){


    return 0;
}