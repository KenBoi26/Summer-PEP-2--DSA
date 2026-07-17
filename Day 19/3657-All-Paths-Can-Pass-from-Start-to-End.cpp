#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

    bool dfs(vector<vector<int>> &adj, int start, int end, vector<int> &visited){
        
        if(adj[start].empty()) return start == end;

        if(visited[start] == 1) return false; // currently visiting

        if(visited[start] == 2) return true; // verified

        visited[start] = 1;

        for(int i:adj[start]){
            if(!dfs(adj, i, end, visited)) return false;
            return true;
        }

        visited[start] = 2;

        return false;
    }


    bool leadsToEnd(int n, vector<vector<int>> &edges, int start, int end) {
        // write your code here
        vector<vector<int>> adj(n);

        for(auto i : edges){
            adj[i[0]].push_back(i[1]);
        }

        vector<int> visited(n, 0);
        return dfs(adj, start, end, visited);
    }
};

int main(){


    return 0;
}