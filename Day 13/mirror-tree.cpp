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
    void mirror(Node* root) {
        // code here
        if(!root) return;
        
        swap(root->right, root->left);
        mirror(root->left);
        mirror(root->right);
    }
};

int main(){


    return 0;
}