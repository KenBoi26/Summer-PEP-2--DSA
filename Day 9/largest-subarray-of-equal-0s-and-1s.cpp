#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        vector<int> pref(arr.size(),0);
        
        pref[0] = (arr[0] == 0) ? -1 : 1;
        for(int i=1; i<arr.size(); i++){
            int sum=1;
            if(arr[i] == 0) sum = -1;
            pref[i] = pref[i-1] + sum;
        }
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        int longest_length = 0;
        
        for(int i=0; i<pref.size(); i++){
            if(mp.find(pref[i]) != mp.end()){
                longest_length = max(longest_length, i-mp[pref[i]]);
            }else{
                mp[pref[i]] = i;
            }
        }
        
        
        return longest_length;
    }
};

int main(){


    return 0;
}