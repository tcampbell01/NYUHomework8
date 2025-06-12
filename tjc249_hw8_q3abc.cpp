#include <iostream>
using namespace std;

void printArray(int arr[], int arrSize);
void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);

int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;

    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;

    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;

    cout << "Original array: ";
    printArray(arr1, arr1Size);

    reverseArray(arr1, arr1Size);

    cout << "Reversed array: ";
    printArray(arr1, arr1Size);

    removeOdd(arr2, arr2Size);

    cout << "Array with removed Odd Numbers: ";
    printArray(arr2, arr2Size);

    splitParity(arr3, arr3Size);
    
    cout << "Array with split parity: ";
    printArray(arr3, arr3Size);

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

//int& reference to an integer
void removeOdd(int arr[], int& arrSize) {
    int writeIndex = 0; // Tracks the position to overwrite elements

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] % 2 == 0) { // Check the value, not the index
            arr[writeIndex] = arr[i]; // Overwrite with even value
            writeIndex++;
        }
    }

    arrSize = writeIndex; // Update the size to reflect the new array size
}

void splitParity(int arr[], int arrSize) {
    int oddIndex = 0;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] % 2 != 0) {
            int temp = arr[i];
            arr[i] = arr[oddIndex];
            arr[oddIndex] = temp;

            oddIndex++;
        }
    }
}