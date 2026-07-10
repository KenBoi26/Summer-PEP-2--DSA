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

    int helper(TreeNode* root, int &sum){
        if(!root) return 0;

        int left = helper(root->left, sum);
        int right = helper(root->right, sum);

        sum = max(sum, root->val + left + right);

        return max(0, root->val + max(left, right));


    }

    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        helper(root, sum);
        return sum;
        
    }
};

int main(){


    return 0;
}