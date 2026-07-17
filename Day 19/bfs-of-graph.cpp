#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int> q;
        vector<int> result;
        vector<bool> is_visited(adj.size(), false);
        
        q.push(0);
        is_visited[0] = true;
        result.push_back(0);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto i:adj[node]){
                if(!is_visited[i]){
                    result.push_back(i);
                    q.push(i);
                    is_visited[i] = true;
                }
            }
        }
        
        return result;
        
        
    }
};

int main(){


    return 0;
}