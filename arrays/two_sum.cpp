// Problem: Two Sum
// Platform: LeetCode
// Difficulty: Easy
// Approach: Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;  // value -> index

    for (size_t i = 0; i < nums.size(); i++) {
        int need = target - nums[i];

        if (mp.find(need) != mp.end()) {
            return {mp[need], static_cast<int>(i)};
        }

        mp[nums[i]] = static_cast<int>(i);
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}

