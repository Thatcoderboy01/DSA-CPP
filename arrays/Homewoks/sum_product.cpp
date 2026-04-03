#include <iostream>
using namespace std;

// 🔹 Q1: Sum & Product of all elements
void sumAndProduct(int arr[], int size, int &sum , int &product){
    sum = 0;
    product = 1;

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }
}

int main(){
    int arr[] = {4, 2, 7, 2, 9, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int sum, product;
    sumAndProduct(arr, size, sum, product);

    cout << "sum : " << sum << endl;
    cout << "Product : " << product << endl;
    return 0;
}