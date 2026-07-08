#include<bits/stdc++.h>
using namespace std;

int array11(const vector<int>& nums, int index) {
    if (index >= static_cast<int>(nums.size())) return 0;
    if (nums[index] == 11) return 1 + array11(nums, index + 1);
    return array11(nums, index + 1);
}

int main() {
    return 0;
}
