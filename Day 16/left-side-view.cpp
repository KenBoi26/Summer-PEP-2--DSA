#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        if(!root) return {};

        vector<int> result;
        queue<Node*> q;

        q.push(root);

        while(!q.empty()){
            int first = 0;
            int size = q.size();
            for(int i=0; i<size; i++){
                Node* node = q.front();
                if(i==0) first = node->data;
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            result.push_back(first);
        }

        return result;
    }
};

int main(){


    return 0;
}