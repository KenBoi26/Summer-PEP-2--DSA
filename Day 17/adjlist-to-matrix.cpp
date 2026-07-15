#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> adjToMat(vector<vector<int>>& adj) {
        // code here
        vector<vector<int>> matrix(adj.size(), vector<int>(adj.size(), 0));
        for(int i=0; i<adj.size(); i++){
            for(int j:adj[i]){
                matrix[i][j] = 1;
            }
        }
        
        return matrix;
    }
};

int main(){


    return 0;
}