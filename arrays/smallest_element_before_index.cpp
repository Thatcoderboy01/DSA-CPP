// Problem: Smallest Element Before Index
// Platform: Practice (Array / Prefix Minimum)
// Difficulty: Easy
// Approach: Prefix Minimum Tracking
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool> hasSmallerBefore(vector<int>& nums){
    int min_so_far = nums[0];
    vector<bool> result;
    result.push_back(false);

    for(size_t i = 1; i < nums.size(); i++){
        if(nums[i] > min_so_far){
           result.push_back(true);
        } else {
            result.push_back(false);
        }
        min_so_far = min(min_so_far, nums[i]);
    }
    return result;
}

int main(){
    vector<int> nums = {5,2,6,1,7};
    
   vector<bool> result = hasSmallerBefore(nums);
   for(bool val : result){
    cout<< val<<" ";
   }

    return 0;
}

// Author: Ritesh Ray
// Date: 2026