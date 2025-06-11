#include <iostream>
using namespace std;

// Function to find the smallest integer in the array
int find_smallest_int(int arr[], int size) {
    int lowest_int = arr[0]; // Initialize with the first element

    for (int i = 1; i < size; i++) { // Start from the second element
        if (arr[i] < lowest_int) {
            lowest_int = arr[i];
        }
    }

    return lowest_int;
}

// Function to find and print all indices of the smallest integer
void find_indices(int arr[], int size, int lowest_int) {
    cout << "and is located in the following indices: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] == lowest_int) { // Compare array value with lowest_int
            cout << i << " "; // Print the index
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 20;
    int array_int[SIZE];

    cout << "Please enter 20 integers separated by a space: " << endl;

    // Input the array
    for (int i = 0; i < SIZE; i++) {
        cin >> array_int[i];
    }

    // Find the smallest integer and assign it to smallest
    int smallest = find_smallest_int(array_int, SIZE);

    // Output the smallest integer
    cout << "The minimum value is " << smallest << ", ";

    // Find and print all indices of the smallest integer
    find_indices(array_int, SIZE, smallest);

    return 0;
}