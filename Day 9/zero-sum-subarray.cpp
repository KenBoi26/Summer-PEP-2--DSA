#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        unordered_map<int,int> mp;
        
        vector<int> pref(arr.size(), 0);
        pref[0] = arr[0];
        
        for(int i=1; i<arr.size(); i++){
            pref[i] = pref[i-1] + arr[i];
        }
        
        mp[0] = 1;
        int count = 0;
        for(int i=0; i<arr.size(); i++){
            if(mp.find(pref[i]) != mp.end()){
                count += mp[pref[i]];
            }
            
            mp[pref[i]]++;
        }
        
        return count;
    }
};

int main(){


    return 0;
}