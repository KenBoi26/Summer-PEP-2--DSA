#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

TreeNode* constructCBT(vector<int> arr, int i=0)
{
    if (i >= arr.size()) return nullptr;

    TreeNode* root = new TreeNode(arr[i]);
    root->left = constructCBT(arr, 2 * i + 1);
    root->right = constructCBT(arr, 2 * i + 2);

    return root;

}

int main(){


    return 0;
}