#include <iostream>
using namespace std;


class Distance {
    private:
        int meter;

        // friend function
        friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
};
int main() {
    Distance D;
    cout << "Distance: " << addFive(D)
    return 0;
}