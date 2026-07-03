#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSubstr(string& s, int k) {
        // code here
        unordered_map<char, int> mp;
        int j = -1;
        int count1 = 0;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
            while(mp.size() > k){
                j++;
                mp[s[j]]--;
                if(mp[s[j]] == 0) mp.erase(s[j]);
            }
            count1 += (i-j);
            
        }
    
        
        unordered_map<char, int> mp1;
        int j1 = -1;
        int count2 = 0;
        for(int i=0; i<s.length(); i++){
            
            mp1[s[i]]++;
            
            while(mp1.size() > k-1){
                j1++;
                mp1[s[j1]]--;
                if(mp1[s[j1]] == 0) mp1.erase(s[j1]);
            }

    
            
            count2 += (i-j1);
            
        }
        
        return count1-count2;
        
        
    }
};

int main(){

    // string s = "abbcaabp";
    string s = "abc";
    int k = 2;

    return 0;
}