#include<bits/stdc++.h>
using namespace std;

class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size() + 1);
        int sm = 0;
        for(int i=0; i<nums.size(); i++){
            prefix[i] = sm;
            sm += nums[i];
        }
        prefix[nums.size()] = sm;
    }
    
    int sumRange(int left, int right) {
        return prefix[right+1] - prefix[left];
    }
};

int main(){


    return 0;
}