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

    void func(TreeNode* root, vector<int> &v){
        if(!root->left && !root->right) v.push_back(root->val);
        if(root->left) func(root->left, v);
        if(root->right) func(root->right, v);

    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> n,m;
        func(root1, n);
        func(root2, m);

        if(n.size() != m.size()) return false;

        for(int i=0; i<n.size(); i++){
            if(n[i] != m[i]) return false;
        }

        return true;
    }
};

int main(){


    return 0;
}