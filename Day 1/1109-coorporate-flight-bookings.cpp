#include<bits/stdc++.h>
using namespace std;
// brute force
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n,0);
        
        for(auto &i:bookings){
            for(int j=i[0]-1; j<i[1]; j++){
                ans[j] += i[2];
            }
        }

        return ans;
    }
};

// prefix sum

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n+2,0);
        
        for(auto &i:bookings){
            ans[i[0]] += i[2];
            ans[i[1]+1] -= i[2];
        }


        vector<int> prefix(n);
        prefix[0] = ans[1];
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] + ans[i+1];
        }
        

        return prefix;
    }
};

int main(){


    return 0;
}