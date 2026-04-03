#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// 🔹 Q2: Swap min & max element
void swapMinMax(int arr[], int size){
    // TODO: find min index & max index, then swap
    int minIndex = 0;
    int maxIndex = 0;

    for (int i=0; i<size; i++){
       if(arr[i] < arr[minIndex]){
        minIndex = i;
       }
       if (arr[i] > arr[maxIndex]){
        maxIndex = i;
       }
    }

    swap (arr[minIndex], arr[maxIndex]);

}

int main(){
    int arr[] = {4, 2, 7, 3, 9, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    swapMinMax(arr, size);

    // print array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}