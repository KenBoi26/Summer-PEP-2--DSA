#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

void inOrder(Node *root) {
    if(!root) return;
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}


int main(){


    return 0;
}