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

    TreeNode* prevNode = nullptr;

    void flatten(TreeNode* root) {

        if(!root) return;

        
        flatten(root->right);
        flatten(root->left);
        
        root->right = prevNode;
        root->left = nullptr;
        prevNode = root;
        
        
    }
};

int main(){


    return 0;
}