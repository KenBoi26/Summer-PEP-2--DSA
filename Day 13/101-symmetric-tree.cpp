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

    bool func(TreeNode* leftNode, TreeNode* rightNode){
        if(!leftNode && !rightNode) return true;
        if((leftNode && !rightNode) || (!leftNode && rightNode)) return false;

        return (leftNode->val == rightNode->val) && func(leftNode->left, rightNode->right) && func(leftNode->right, rightNode->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return func(root->left, root->right);
    }
};

int main(){


    return 0;
}