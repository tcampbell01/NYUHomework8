#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void extractWordsAndAddToArray(string line, string wordsArray[], int &wordCount) {
    stringstream ss(line); // Create a stringstream from the input line
    string word;
    wordCount = 0; 

    // Extract words and add them to the array
    while (ss >> word) {
        wordsArray[wordCount] = word;
        wordCount++;
    }
}

int replaceInt(string wordsArray[], int wordCount) {
    for (int i = 0; i < wordCount; i++) {
        if (!wordsArray[i].empty()) {
            bool isAllDigits = true;

            // Check if the entire word consists of digits
            for (int j = 0; j < wordsArray[i].length(); j++) {
                if (!isdigit(wordsArray[i][j])) {
                    isAllDigits = false;
                    break;
                }
            }

            // If the word is entirely digits, replace all characters with 'x'
            if (isAllDigits) {
                for (int j = 0; j < wordsArray[i].length(); j++) {
                    wordsArray[i][j] = 'x'; 
                }
            }
        }
    }

    
    return 0; 
}

int main() {
    string line;
    string wordsArray[100]; 
    int wordCount = 0;

    
    cout << "Please enter a line of text: " << endl;
    getline(cin, line);

   
    extractWordsAndAddToArray(line, wordsArray, wordCount);

    
    replaceInt(wordsArray, wordCount);

    
    for (int i = 0; i < wordCount; i++) {
        cout << wordsArray[i];
        if (i < wordCount - 1) {
            cout << " "; 
        }
    }
    cout << endl;

    return 0;
}

