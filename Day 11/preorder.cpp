#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

void preOrder(Node *root) {
    if(!root) return;
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){


    return 0;
}