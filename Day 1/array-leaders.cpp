#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int> leaders;
        int greatest = arr[arr.size()-1];
        leaders.push_back(greatest);
        for(int i=arr.size()-2; i>=0; i--){
            if(arr[i] >= greatest){
                leaders.push_back(arr[i]);
                greatest = arr[i];
            }
        }
        
        reverse(leaders.begin(), leaders.end());
        
        return leaders;
    }
};

int main(){


    return 0;
}