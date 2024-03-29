#include <iostream>
using namespace std;

// Optimized bubble sort in C++
// Perform bubble sort
void bubbleSort(int array[], int size) {
    // Loop to access each array element
    for (int step = 0; step < (size - 1); ++step) {
        // Check if swapping occurs
        int swapped = 0;
        // Loop to compare two elements
        for (int i = 0; i < (size - step - 1); ++i) {
            // Compare two array elements
            // Change > to < to sort in descending order
            if (array[i] > array[i + 1]) {
                // Swapping occurs if elements
                // are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
        // No swapping means the array is already sorted
        // so no need for further comparison
        if (swapped == 0)
            break;
    }
}

// Print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << " " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, -9};

    // Find the array's length
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);
    return 0;
}
