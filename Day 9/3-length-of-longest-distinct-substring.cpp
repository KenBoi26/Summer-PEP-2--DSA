#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int start = 0;

        if(s.length() == 0) return 0;

        int longest = 1;

        for(int i=0; i<s.length(); i++){
            if(mp.find(s[i]) != mp.end() && mp[s[i]] >= start){
                start = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
            longest = max(longest, i-start+1);
        }


        return longest;
    }
};

int main(){


    return 0;
}