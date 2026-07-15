#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void helper(vector<vector<int>> &adj, vector<bool> &is_visited, int index, vector<int> &result){
        is_visited[index] = true;
        
        for(auto i:adj[index]){
            if(!is_visited[i]){
                result.push_back(i);
                helper(adj, is_visited, i, result);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> result;
        vector<bool> is_visited(adj.size(), false);
        
        result.push_back(0);
        
        helper(adj, is_visited, 0, result);
        
        return result;
        
    }
};

int main(){


    return 0;
}