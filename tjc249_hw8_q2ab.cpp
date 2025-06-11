#include <iostream>
using namespace std;

//Part a

bool isPalindrome(string str, int length) {

    int length;
    string reversedStr = "";


    for(int i = length - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    if(reversedStr == str) {
        return true;
    }
}

//Part b

bool isPalindrome(string str) {

    
    string reversedStr = "";

    for(int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    if(reversedStr == str) {
        cout << str << " is a palindrome" << endl;
    } 
    else {
        cout << str << " is not a palindrome" << endl;
    }

    return 0;

}

int main() {

    string word;

    cout << "Please enter a word: ";
    cin >> word;

    isPalindrome(word);

    
}
