#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

void second_largest(vector<int> & arr, int n){
    int largest = arr[0];
    int secoundLargest = -1;

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secoundLargest = largest;
            largest = arr[i];

        } else if(arr[i] > secoundLargest && arr[i] != largest){
            secoundLargest = arr[i];
        }
    }

    cout << "Second Largest = "<< secoundLargest << endl;

    return;
}

int main(){
   int n = 6;
   vector<int> arr = {10, 5, 20, 8, 15, 20};

   second_largest(arr, n);

    return 0;
}