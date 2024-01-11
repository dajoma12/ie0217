#include <iostream>
using namespace std;


class ClassB;

class ClassA {
    public:
        // constructor to initialize numA to 12
        classA : numA(12) {}

    private:
        int numA;
        // friend function declaration
        friend int add(ClassA, ClasB);
};

// access members of both classes
int add(ClassA objectA, ClasB objectB) {
    return (objectA.numA + objectB.numB);
}


int main() {
    ClassA objectA;
    ClassB objectB;
    
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}