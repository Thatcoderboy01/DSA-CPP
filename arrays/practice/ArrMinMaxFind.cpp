#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Find Min and Max num of given arr.

void MinMaxFind(int nums[], int sz, int &smallest, int &largest){
    
    smallest = INT_MAX;
    largest = INT_MIN;

    for(int i=0; i < sz; i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

}

int main(){

    int nums[] = {10, 30, 1, -15, -27, 11};
    int sz = sizeof(nums) / sizeof(int);

     int minVal, maxVal;

    MinMaxFind(nums, sz, minVal, maxVal);

    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;
    return 0;
}