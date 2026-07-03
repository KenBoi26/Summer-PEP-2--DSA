#include<bits/stdc++.h>
using namespace std;


int main(){

    string s = "bapcpak";

    unordered_map<char, int> mp;
    int j = -1;
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(mp.find(s[i]) != mp.end()){
            while(mp[s[i]] > 0){
                j++;
                mp[s[j]]--;
                if(mp[s[j]] == 0) mp.erase(s[j]);
            }
        }

        mp[s[i]]++;
        count += (i-j);
        
    }

    cout << count << endl;


    return 0;
}