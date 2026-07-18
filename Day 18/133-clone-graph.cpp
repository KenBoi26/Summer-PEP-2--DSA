#include<bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:

    Node* dfs(Node* current, unordered_map<Node*, Node*> &mp){
        Node* node = new Node(current->val);
        mp[current] = node;

        vector<Node*> neighbors;

        for(auto i:current->neighbors){
            if(mp.find(i) != mp.end()) neighbors.push_back(mp[i]);
            else neighbors.push_back(dfs(i, mp));
        }

        node->neighbors = neighbors;
        return node;
    }

    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> mp;

        if(!node) return nullptr;

        if(node->neighbors.size() == 0){
            Node* copy = new Node(node->val);
            return copy;
        }        

        return dfs(node, mp);
    }
};

int main(){


    return 0;
}