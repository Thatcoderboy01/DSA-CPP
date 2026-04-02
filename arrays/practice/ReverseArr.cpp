#include <iostream>
using namespace std;

void reverseArr (int arr[], int size){
    int start =0, end = size-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={4, 5, 3, 9, 2, 0, 1};
    int size = sizeof(arr) / sizeof(int);

    reverseArr(arr, size);

    for(int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }

    cout<< endl;
    return 0;
}