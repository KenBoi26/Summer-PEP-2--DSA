#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        vector<int> pref(arr.size(),0);
        pref[0] = arr[0];
        
        
        for(int i=0; i<arr.size(); i++){
            pref[i] = pref[i-1] + arr[i];
        }
        
        unordered_map<int,int> mp;
        mp[0] = 1;
        
        int count = 0;
        for(int i=0; i<arr.size(); i++){

            
            if (mp.find(pref[i] - k) != mp.end()){
                count += mp[pref[i]-k];

            }
            
            mp[pref[i]]++;
        }
        
        return count;
    }
};

int main(){


    return 0;
}