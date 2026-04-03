#include <iostream>
using namespace std;

// 🔹 Q3: Print unique elements
void printUnique(int arr[], int size){
    // TODO: print elements that appear only once

    for(int i=0; i<size; i++){
        int count = 0;

        for(int j=0; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<< arr[i]<< " ";
        }
    }
}

int main(){
    int arr[] = {4, 2, 7, 2, 9, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    printUnique(arr, size);

    return 0;
}