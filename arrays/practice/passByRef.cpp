#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout << "in Function\n";
    for(int i=0; i< size; i++){
        arr[i] = 2* arr[i];
    }
}


int main(){
    int arr[] = {1, 34, 52, 56, 23, 4};
    int size = sizeof(arr) / sizeof(int);

    changeArr(arr, size);
    cout << "in main\n";

    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}