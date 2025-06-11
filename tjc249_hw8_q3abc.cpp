#include <iostream>
using namespace std;

void printArray(int arr[], int arrSize);
void reverseArray(int arr[], int arrSize);

int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;

    cout << "Original array: ";
    printArray(arr1, arr1Size);

    reverseArray(arr1, arr1Size);

    cout << "Reversed array: ";
    printArray(arr1, arr1Size);

    return 0;
}

void printArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void reverseArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = temp;
    }
}