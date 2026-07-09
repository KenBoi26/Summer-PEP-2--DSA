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

    bool func(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        if((!p && q) || (!q && p)) return false;

        return p->val == q->val && func(p->left, q->left) && func(p->right, q->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        return func(p,q);
    }
};

int main(){


    return 0;
}