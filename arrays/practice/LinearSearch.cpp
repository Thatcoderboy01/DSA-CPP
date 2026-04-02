#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4, 1, 6, 8, 1, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int target = 8;

   cout << LinearSearch(arr, size, target);

    return 0;
}