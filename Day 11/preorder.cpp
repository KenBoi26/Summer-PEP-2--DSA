#include<bits/stdc++.h>
using namespace std;

void preOrder(Node *root) {
    if(!root) return;
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){


    return 0;
}