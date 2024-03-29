#include <iostream>
using namespace std;

class ClasB;


class ClassA {
    private:
        int numA;

        // friend class declaration
        friend class ClassB;

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}

}


class ClassB {
    private:
        int numB;

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}

        // member function to add numA
        // frim ClassA and numB from ClassB

        int add() {
            ClassA objectA;
            return objectA.numA + numB;
        }
};
int main() {
    classB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}