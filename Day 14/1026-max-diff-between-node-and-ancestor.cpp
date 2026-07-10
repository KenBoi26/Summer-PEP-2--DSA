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
    int dfs(TreeNode* node, int mn, int mx) {
        if (!node)
            return mx - mn;

        mn = min(mn, node->val);
        mx = max(mx, node->val);

        return max(dfs(node->left, mn, mx),
                   dfs(node->right, mn, mx));
    }

    int maxAncestorDiff(TreeNode* root) {
        return dfs(root, root->val, root->val);
    }
};

int main(){


    return 0;
}