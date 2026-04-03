#include <iostream>
using namespace std;

// 🔹 Q2: Swap min & max element
void swapMinMax(int arr[], int size){
    // TODO: find min index & max index, then swap
}

int main(){
    int arr[] = {4, 2, 7, 2, 9, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    swapMinMax(arr, size);

    // print array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}