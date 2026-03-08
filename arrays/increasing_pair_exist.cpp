// Problem: Increasing Pair Exist
// Platform: Practice (Array)
// Difficulty: Easy
// Approach: Greedy / Minimum Tracking
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

bool hasIncreasingPair(vector<int>& nums){
    int min_so_for = nums[0];

    for(size_t i = 1; i < nums.size(); i++){
        if (nums[i] > min_so_for){
            return true;
        }
        min_so_for = min(min_so_for, nums[i]);
    }

    return false;
}

int main(){
    
    vector<int> nums = {5,6,3,2,1};

    if(hasIncreasingPair(nums)){
        cout<< "Increasing pair exists";
    } else{
        cout << "No pair exists";
    }

    return 0;
}

// Author: Ritesh Ray
// Date: 2026