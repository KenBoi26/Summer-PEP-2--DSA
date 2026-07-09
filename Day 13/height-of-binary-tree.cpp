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
    int height(Node* root) {
        
        if(!root) return -1;
        
        return 1+max(height(root->left), height(root->right));
    }
};

int main(){


    return 0;
}