#include <iostream>

using namespace std;

/* .data section. */
int variableGlobal = 10;

/* Se guarda en el .txt dado que solo sus variabes
se podifican, lo que hace siempre se mantine */
void functionGlobal(){

    /* .data, porque yo la puede modificar*/
    // estatica es que se ejecuta una sola vez
    static int variableLocalEstatica = 5;

    /* stac section*/
    // cae en el stack porque la puedo modificar de cualquier punto
    int  variableLocal  = 20;

    cout << "Variable global: " << variableGlobal << endl;
    cout << "Variable local estatica: " << variableLocalEstatica << endl;
    cout << "Variable local: " << variableLocal << endl;

}

int main() {

    /* stack section. */
    int variableLocalMain = 15;

    functionGlobal();

    cout << "Variable local en main: " << variableLocalMain << endl;
    
    // /* heap stection. */
    int *variableDinamica = new int;

    // Declaramos para cambiar el valor al que a punta la direccion
    *variableDinamica = 25;


    // imprime el contenido de la variable
    cout << "Variable dinamica: " << *variableDinamica << endl;
    
    delete variableDinamica;

    return 0;
}


/* La sesion de datos se puede cambiar en caliente en run*/

/* Si fuera constantes se iria al .text*/

/* Variables locales son aquellas que viven dentro de la funcion*/