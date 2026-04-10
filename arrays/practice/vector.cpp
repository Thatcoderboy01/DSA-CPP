#include <iostream>
#include <vector>
using namespace std;

int main(){
vector <int> nums;

    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    
    cout << nums.size()<< endl;
    cout << nums.capacity();
   

    return 0;
}