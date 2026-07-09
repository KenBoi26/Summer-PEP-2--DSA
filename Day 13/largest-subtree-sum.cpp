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
    int helper(Node* root, int &maxi){
        if(!root) return 0;
        
        int left_sum = helper(root->left, maxi);
        int right_sum = helper(root->right, maxi);
        
        int current_sum = root->data + left_sum + right_sum;
        
        maxi = max(maxi, current_sum);
        
        return current_sum;
    }
  
    int maxSubtreeSum(Node* root) {
        // code here
        if(!root) return 0;
        
        int maxi = INT_MIN;
        
        helper(root, maxi);
        
        return maxi;
        
    }
};


int main(){


    return 0;
}