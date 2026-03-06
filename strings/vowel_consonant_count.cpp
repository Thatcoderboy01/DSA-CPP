#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void countCv(string s){
    int vowel = 0;
    int consonants =0;

    for(char ch : s){
        if(isalpha(ch)){

            ch = tolower(ch);
            if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u'){
                vowel++;
            } else {
                consonants++;
            }
        }
    }

    cout << "vowel = " << vowel<< endl;
    cout << "consonants = " << consonants<< endl;
    return ;
}

int main(){
    string s= "Hello World";

    countCv(s);
    return 0;
}