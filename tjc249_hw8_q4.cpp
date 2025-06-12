#include <iostream>
using namespace std;

const int PIN = 56823;
void getRandomCode(int randomCodeArray[]);
int enterCode();

bool checkCode(int enteredCode, int randomCodeArray[]);

int main() {

    int randomCodeArray[10];


    getRandomCode(randomCodeArray);

    int enteredCode = enterCode();
    
    // Check if the entered code matches the PIN
    if (checkCode(enteredCode, randomCodeArray)) {
        cout << "Your PIN is correct" << endl;
    } else {
        cout << "Your PIN is incorrect" << endl;
    }

    return 0;
}




void getRandomCode(int randomCodeArray[]) { 

    cout << "Please enter your PIN according to the following mapping: " << endl;
    cout << "PIN: 0 1 2 3 4 5 6 7 8 9 " << endl;
    cout << "NUM: ";

    for(int i = 0; i < 10; i++) {
        randomCodeArray[i] = rand() % 3 + 1;
    }

    for(int i = 0; i < 10; i++) {
        cout << randomCodeArray[i] << " ";
    }
    cout << endl;

}

int enterCode() {

    int enteredCode;

    cin >> enteredCode;

    return enteredCode;

    
}

bool checkCode(int enteredCode, int randomCodeArray[]) {
    int pin = PIN;

    // Compare each digit of the entered code with the mapped PIN
    while (pin > 0 && enteredCode > 0) {
        int pinDigit = pin % 10; // Extract the last digit of the PIN
        int codeDigit = enteredCode % 10; // Extract the last digit of the entered code

        // Check if the entered code digit matches the mapped PIN digit
        if (randomCodeArray[pinDigit] != codeDigit) {
            return false; // Mismatch found
        }

        pin /= 10; // Remove the last digit of the PIN
        enteredCode /= 10; // Remove the last digit of the entered code
    }



    return pin == 0 && enteredCode == 0; // Ensure both PIN and entered code are fully processed
   
}