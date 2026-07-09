#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

int countLeaves(Node* root) {
        // write code here
    if(!root) return 0;
    if(!root->left && !root->right) return 1;
    
    return countLeaves(root->left) + countLeaves(root->right);
}

int main(){


    return 0;
}