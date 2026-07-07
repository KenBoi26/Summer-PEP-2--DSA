#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSize(Node* root) {
        // code here
        if(!root) return 0;
        return 1 + getSize(root->left) + getSize(root->right);
    }
};

int main(){


    return 0;
}