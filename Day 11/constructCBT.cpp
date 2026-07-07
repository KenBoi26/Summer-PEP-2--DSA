#include<bits/stdc++.h>
using namespace std;

TreeNode <int>* constructCBT(vector <int> arr, int i=0)
{
    if (i >= arr.size()) return nullptr;

    TreeNode <int>* root = new TreeNode<int>(arr[i]);
    root->left = constructCBT(arr, 2 * i + 1);
    root->right = constructCBT(arr, 2 * i + 2);

    return root;

}

int main(){


    return 0;
}