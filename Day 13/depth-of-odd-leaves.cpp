#include<bits/stdc++.h>
using namespace std;

struct Node {
        int data;
        Node *left;
        Node *right;

        Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    int depthOfOddLeaf(Node *root, int level = 1) {
        // code here
        if(!root) return 0;
        if(!root->left && !root->right) return (level % 2 != 0) ? level : 0;
        
        int leftTree = depthOfOddLeaf(root->left, level+1);
        int rightTree = depthOfOddLeaf(root->right, level+1);
        
        return max(leftTree, rightTree);
    }
};

int main(){


    return 0;
}