#include <iostream>
using namespace std;

class Base {
    public:
        void print() {
            cout << "Base Function" << endl;
        }
}:

class Derived : public Bae {
    public:
        void print () {
            cout << "Derived Function" << endl;
        }
};

int main() {
    Derived derived1;
    derived1.print();
    return 0;
}