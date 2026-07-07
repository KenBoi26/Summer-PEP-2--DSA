#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMax(Node *root) {
        // code here
        if(!root) return INT_MIN;
        
        return max({root->data, findMax(root->left), findMax(root->right)});
    }

    int findMin(Node *root) {
        
        // code here
        if(!root) return INT_MAX;
        return min({root->data, findMin(root->left), findMin(root->right)});
    }
};

int main(){


    return 0;
}