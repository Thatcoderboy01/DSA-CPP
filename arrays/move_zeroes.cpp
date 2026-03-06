#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    int j =0;
    for (size_t i =0; i <nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
    return;
}

int main() {
    vector<int> nums = {0,1,0,3,12};

    moveZeroes(nums);
    for(int X: nums){
        cout<< X<< " ";
    }
    return 0;
}