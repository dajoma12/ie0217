#include <iostream>
using namespace std;

int main() {
    int var = 5;

    // declare pointer variable
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print value of var
    cout << "var = " << var << endl;

    // print pointer pointVar
    cout << "pointVar = " << pointVar << endl;

    //print the content of the addres pointVar points to
    cout << "Content of the addres pointed to by pointVar (*pointVar) = " << *pointvar << endl;

    return 0;
}