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
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        swap(root->left, root->right);

        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);

        return root;
    }
};

int main(){


    return 0;
}