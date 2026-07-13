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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()) return nullptr;

        TreeNode* root = new TreeNode(preorder[0]);
        
        int index_of_root = -1;
        for(int i=0; i<inorder.size(); i++){
            if(inorder[i]==preorder[0]){
                index_of_root = i;
                break;
            }
        }

        vector<int> left_preorder(preorder.begin()+1, preorder.begin()+index_of_root+1);
        vector<int> left_inorder(inorder.begin(), inorder.begin()+index_of_root);
        
        vector<int> right_preorder(preorder.begin()+index_of_root+1, preorder.end());
        vector<int> right_inorder(inorder.begin()+index_of_root+1, inorder.end());

        TreeNode* left = buildTree(left_preorder, left_inorder);
        TreeNode* right = buildTree(right_preorder, right_inorder);

        root->left = left;
        root->right = right;

        return root;
    }
};

int main(){


    return 0;
}