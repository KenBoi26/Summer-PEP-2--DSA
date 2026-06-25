#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int calc(vector<int> &arr, int mid){
        int count = 1;
        int total = 0;
        
        for(auto i:arr){
            if(total+i <= mid){
                total += i;
            }else{
                total = i;
                count++;
            }
        }
        return count;
    }
  
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k > arr.size()) return -1;
        
        int left = *max_element(arr.begin(), arr.end());
        int right = 0;
        
        for(auto i:arr){
            right += i;
        }
        
        int ans = -1;
        while(left <= right){
            int mid = left+(right-left)/2;

            if(calc(arr, mid) <= k){
                ans = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        
        return ans;
        
    }
};


int main(){

    

    return 0;
}