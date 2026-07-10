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

    void helper(TreeNode* root, int num, vector<int> &numbers){
        if(!root) return;

        num = num*10 + root->val;

        if(!root->left && !root->right){
            numbers.push_back(num);
        }else{
            helper(root->left, num, numbers);
            helper(root->right, num, numbers);
        }


    }

    int sumNumbers(TreeNode* root) {
        vector<int> numbers;
        helper(root, 0, numbers);

        int sum = 0;

        for(auto i:numbers){
            sum += i;
        }

        return sum;
    }
};

int main(){


    return 0;
}