#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

int leafSum(Node* root) {
        // code here
    if(!root) return 0;
    if(!root->left && !root->right) return root->data;
    return leafSum(root->left)+leafSum(root->right);
}

int main(){


    return 0;
}