#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        // Complete the function
        unordered_map<int,int> mp;
        
        mp[0] = -1;
        vector<long long> pref(arr.size(), 0);
        
        pref[0] = arr[0];
        for(int i=1; i<arr.size(); i++){
            pref[i] = pref[i-1] + arr[i];
        }
        
        int max_length = 0;
        

        
        for(int i=0; i<pref.size(); i++){
            
            int rem = ((pref[i] % k) + k) % k;
            
            if(mp.find(rem) != mp.end()){
                max_length = max(max_length, i - mp[rem]);
            }else{
                mp[rem] = i;
            }
                
            
        }
        
        return max_length;
    }
};

int main(){


    return 0;
}