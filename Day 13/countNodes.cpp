#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

int countNodes(Node* root) {
        // code here
    if(!root) return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}

int main(){


    return 0;
}