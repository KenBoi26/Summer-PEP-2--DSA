#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void left_view(Node* root, vector<int> &result){
        Node* current = root->left;
        
        while(current){
            if(current->left || current->right) result.push_back(current->data);
            if(current->left) current = current->left;
            else current = current->right;
        }
        
    }
    
    void right_view(Node* root, vector<int> &result){
        Node* current = root->right;
        vector<int> temp;
        
        while(current){
            if(current->left || current->right) temp.push_back(current->data);
            if(current->right) current = current->right;
            else current = current->left;
        }
        
        for(int i=temp.size()-1; i>=0; i--){
            result.push_back(temp[i]);
        }
        
    }
    
    void leaf(Node* root, vector<int> &result){
        if (!root) return;
        if (!root->left && !root->right) result.push_back(root->data);
        
        leaf(root->left, result);
        leaf(root->right, result);
    
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> result;
        
        if(!root) return result;
        
        result.push_back(root->data);
        left_view(root, result);
        leaf(root->left, result);
        leaf(root->right, result);
        right_view(root, result);
        
        return result;
    }
};

int main(){


    return 0;
}