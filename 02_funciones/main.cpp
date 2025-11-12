#include <iostream>
#include "funciones.cpp"

using namespace std;

int main() {

    float millas, libras;

    cout << "Escribe la cantidad de millas: ";
    cin >> millas;

    cout << "Escribe la cantidad de libras: ";
    cin >> libras;

    going_to_mexico(millas, libras);

    return 0;
}