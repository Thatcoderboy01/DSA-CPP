#include <iostream>
using namespace std;

int main(){
 int marks[] = {10, 20, 30, 40, 50};

 int sz = sizeof(marks) / sizeof(int);


//  manual print
//  cout << marks[0];
//  cout << marks[1];
//  cout << marks[2];
//  cout << marks[3];
//  cout << marks[4];


// for loops

// for(int i=0; i<sz; i++){
//     cout<<marks[i]<< endl;
// }

// while loop

int i = 0;
while(i < sz){
    cout << marks[i] << endl;
    i++;
}

    return 0;
}