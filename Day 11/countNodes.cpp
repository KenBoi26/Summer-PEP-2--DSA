#include<bits/stdc++.h>
using namespace std;

int countNodes(Node* root) {
        // code here
    if(!root) return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}

int main(){


    return 0;
}