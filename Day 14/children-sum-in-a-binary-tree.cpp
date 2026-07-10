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
    bool isSumProperty(Node *root) {
        // code here
        if(!root) return true;
        if(root->left && root->right){
            if(root->left->data + root->right->data == root->data) return true && isSumProperty(root->left) && isSumProperty(root->right);
            else return false;
        }else if(root->left && !root->right){
            if(root->left->data == root->data) return true && isSumProperty(root->left);
            else return false;
        }else if(!root->left && root->right){
            if(root->right->data == root->data) return true && isSumProperty(root->right);
            else return false;
        }else{
            return true;
        }
    }
};

int main(){


    return 0;
}