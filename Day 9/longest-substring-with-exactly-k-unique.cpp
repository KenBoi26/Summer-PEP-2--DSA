#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int left = 0;
        unordered_map<char, int> mp;
        
        int ans = -1;
        
        for(int right = 0; right<s.length(); right++){
            mp[s[right]]++;
            
            while(mp.size() > k){
                mp[s[left]]--;
                if(mp[s[left]] == 0) mp.erase(s[left]);
                left++;
            }
            
            if(mp.size() == k) ans = max(ans, right-left+1);
        }
        
        return ans;
    }
};

int main(){


    return 0;
}