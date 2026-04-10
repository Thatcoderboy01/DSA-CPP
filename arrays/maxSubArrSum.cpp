#include <iostream>
#include <climits>
using namespace std;

//Maximum Sub Array Sum
// Brute force 

int MaximumSubArraySum(int arr[], int n){

    int maxSum = INT_MIN;

    for(int st = 0; st<n; st++){
        for(int end=st; end<n; end++){
            int currSum = 0;

            for(int i=st; i<=end; i++){
                currSum += arr[i];
            }
            maxSum = max(currSum, maxSum);
        }
    }

    return maxSum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout<< "Maximum Sum of SubArray: "<< MaximumSubArraySum(arr, n);
    return 0;
}