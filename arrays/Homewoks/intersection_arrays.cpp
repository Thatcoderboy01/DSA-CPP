#include <iostream>
#include <vector>
using namespace std;

// 🔹 Q4: Intersection of 2 arrays
void intersection(int arr1[], int size1, int arr2[], int size2){
    // TODO: print common elements
    vector<bool> visited(size2, false);

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i] == arr2[j] && !visited[j]){
                cout << arr1[i]<< " ";
                visited[j] = true;
                break;

            }
        }
    }

}

int main(){
    int arr1[] = {4, 2, 7, 2, 9};
    int arr2[] = {1, 2, 4, 8, 5};

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    intersection(arr1, size1, arr2, size2);

    return 0;
}