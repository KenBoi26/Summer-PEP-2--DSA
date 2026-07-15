#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    bool dfs(vector<vector<int>> &adj, vector<bool> &visited, int node, int parent){
        
        visited[node] = true;
        
        for(auto i:adj[node]){
            if(!visited[i]){
                if(dfs(adj, visited, i, node)) return true;
            }else if(i != parent) return true;
            
        }
        
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adjList(V);
        vector<bool> visited(V, false);
        
        for(auto i:edges){
            adjList[i[0]].push_back(i[1]);
            adjList[i[1]].push_back(i[0]);
        }
        
        for(int i=0; i<V; i++){
            if(!visited[i]){
                if(dfs(adjList, visited, i, -1)) return true;
            }
        }
        
        return false;
        
        
    }
};

int main(){


    return 0;
}