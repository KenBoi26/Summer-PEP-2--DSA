#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        mp[0] = -1;
        vector<int> pref(arr.size(), 0);
        
        pref[0] = arr[0];
        for(int i=1; i<arr.size(); i++){
            pref[i] = pref[i-1] + arr[i];
        }
        
        int max_length = 0;
        
        
        for(int i=0; i<pref.size(); i++){
            if(mp.find(pref[i]) == mp.end()){
                mp[pref[i]] = i;
            }else{
                max_length = max(max_length, i - mp[pref[i]]);
            }
            
        }
        
        return max_length;
    }
};

int main(){


    return 0;
}