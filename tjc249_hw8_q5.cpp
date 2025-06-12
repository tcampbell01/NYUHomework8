#include <iostream>
#include <string>
using namespace std;

int main() {

    string Last_Name, First_Name, Middle_Initial;

    cout << "Please enter your first name middle name and last name with spaces between them." << endl;

    cin >> First_Name >> Middle_Initial >> Last_Name;

    char m_initial = Middle_Initial[0];

    cout << Last_Name << ", " << First_Name << " " << m_initial << "." << endl;


}