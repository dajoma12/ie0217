#include <iostream>

using namespace std;

// Function declaration
int add(int a, int b);

int main() {
    int sum;

    // Calling the function and storing
    // the returned value in 'sum'
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
