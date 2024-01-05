#include <iostream>
using namespace std;

int main() {
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        cout << "Enter n" << i << ": ";
        cin >> num;

        if (num < 0.0) {
            // Control of the program moves to jump:
            goto jump;
        }

        sum += num;
    }

jump:
    // Check if i is 1 to avoid division by zero
    if (i - 1 != 0) {
        average = sum / (i - 1);
        cout << "\nAverage = " << average;
    } else {
        cout << "No valid input. Cannot calculate average." << endl;
    }

    return 0;
}
