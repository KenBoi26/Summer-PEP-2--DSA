#include<bits/stdc++.h>
using namespace std;

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