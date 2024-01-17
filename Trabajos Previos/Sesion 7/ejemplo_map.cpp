#include <iostream>
#include <map>

using namespace std;

int main() {
    
    // syntaxis map<tipo de dato key, tipo de dato value> nombre del map
    map<int, string> student;

    // usa operador [] para añadir elementos
    student[1] = "Jacqueline"; 
    student[2] = "Blake";

    // usa el metodo insert() para añadir elementos
    // recibe un par ordenado
    student.insert(make_pair(3, "Denise")); // Hacer un par ordenado
    student.insert(make_pair(4, "Denise"));
    // Los values pueden ser iguales, los key no

    // Agrega elementos con llaves duplicadas
    student[5] = "Timothy";
    student[5] = "Aaron";
     
    for (int i = 1; i <= student.size(); ++i) {
        cout << "Student[" << i << "]" << student[i] << endl;
    }

    return 0;
}