#include<bits/stdc++.h>
using namespace std;

bool array220(const vector<int>& nums, int index) {
    if (index + 1 >= static_cast<int>(nums.size())) return false;
    if (nums[index] * 10 == nums[index + 1]) return true;
    return array220(nums, index + 1);
}

int main() {
    return 0;
}
