#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */

class Solution {
public:
    /**
     * @param grid: a chessboard included 0 (false) and 1 (true)
     * @param source: a point
     * @param destination: a point
     * @return: the shortest path 
     */
    int shortestPath(vector<vector<bool>> &grid, Point source, Point destination) {
        // write your code here
        int n = grid.size();
        int m = grid[0].size();

        if(source.x == destination.x && source.y == destination.y) return 0;

        queue<pair<int,int>> q;

        vector<pair<int,int>> directions = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

        q.push({source.x, source.y});
        int count = 0;

        while(!q.empty()){
            int size = q.size();

            for(int i=0; i<size; i++){
                int row = q.front().first;
                int column = q.front().second;

                q.pop();

                for(auto j:directions){
                    int new_row = row + j.first;
                    int new_column = column + j.second;

                    if(new_row >= 0 && new_row < n && new_column >= 0 && new_column < m){
                        if(grid[new_row][new_column] == 0){
                            grid[new_row][new_column] = 1;
                            q.push({new_row, new_column});
                        }
                        if(new_row == destination.x && new_column == destination.y) return count+1;
                    }
                }
            }

            count++;
        }

        return -1;
    }
};

int main(){


    return 0;
}