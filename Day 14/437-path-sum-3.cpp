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

    int helper(TreeNode* root, long long sum, int targetSum){
        if(!root) return 0;

        sum += root->val;

        int count = 0;
        if(sum == targetSum) count = 1;

        count += helper(root->left, sum, targetSum);
        count += helper(root->right, sum, targetSum);

        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;

        return helper(root, 0, targetSum) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
        
    }
};

int main(){


    return 0;
}