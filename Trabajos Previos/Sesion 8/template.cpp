// Clase template
template <class T>
class Number {
    private:
        // Variable de tipo T
        T num;

    public:
        Number(T n) : num(n) {} // constructor

        T getNum() {
            return num;
        }
};

int main() {

    // creacion de objeto con tipo int
    Number<int> numberInt(7);

    // creacion de objeto con doble tipo
    Number<double> numberDouble(7.7);

    // imprime los resultados
    cout << "int Number = " << numberInt.getNuM() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}