#include <bits/stdc++.h>
using namespace std;

int kDistinctChars(int k, string &str)
{
    // Write your code here
    int start=0;
    int ans = 0;
    unordered_map<char,int> mp;

    for(int i=0; i<str.size(); i++){
        mp[str[i]]++;
        while(mp.size() > k){
            mp[str[start]]--;
            if(mp[str[start]] == 0) mp.erase(str[start]);
            start++;
        }
        
        ans = max(ans, i-start+1);
        
    }

    return ans;
}




int main(){


    return 0;
}