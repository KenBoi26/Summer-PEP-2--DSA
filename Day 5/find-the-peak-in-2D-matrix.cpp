#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int left = 0;
        int right = mat[0].size()-1;
        
        while(left <= right){
            int mid = left+(right-left)/2;
            
            int max = 0;
            
            for(int i=1; i<mat.size(); i++){
                if(mat[i][mid] > mat[max][mid]){
                    max = i;
                }
            }
            
            int leftVal;

            if(mid > 0) {
                leftVal = mat[max][mid - 1];
            }else{
                leftVal = INT_MIN;
            }
            
            int rightVal;
            if(mid < mat[0].size() - 1){
                rightVal = mat[max][mid+1];
            }else{
                rightVal = INT_MIN;
            }
            if(mat[max][mid] >= leftVal && mat[max][mid] >= rightVal){
                // cout << max << " " << mid << endl;
                return {max, mid};
            }
            
            if(mat[max][mid] < leftVal){
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        
        return {-1,-1};
    }
};


int main(){


    return 0;
}