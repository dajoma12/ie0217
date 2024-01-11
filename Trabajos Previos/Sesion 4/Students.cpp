#include <iostream>
using namespace std;

class Student {

    public:
        double marks;

        Student(double m) {
            marks = m;
        }
};

void calculateAverage(Student s1, Student s2) {

    double average = (s1.marks + s2.marks) / 2;

    cout << "Average Marks = " << average << endl;
}

int main() {
    Sstudent Student1(88.0), Student2(56.0);

    calculaAverage(student1, student2);

    return 0;
}