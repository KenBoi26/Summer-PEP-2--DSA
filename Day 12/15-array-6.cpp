#include<bits/stdc++.h>
using namespace std;

bool array6(const vector<int>& nums, int index) {
    if (index >= static_cast<int>(nums.size())) return false;
    if (nums[index] == 6) return true;
    return array6(nums, index + 1);
}

int main() {
    return 0;
}
