#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

void postOrder(Node *root) {
    if(!root) return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main(){


    return 0;
}