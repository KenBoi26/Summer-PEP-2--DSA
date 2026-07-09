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

    int diameter = 0;

    int max_depth(TreeNode* root){
        if(!root) return 0;

        int left_depth = max_depth(root->left);
        int right_depth = max_depth(root->right);

        diameter = max(diameter, left_depth+right_depth);

        return 1+max(left_depth, right_depth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        diameter = 0;
        max_depth(root);

        return diameter;
    }
};

int main(){


    return 0;
}