#include <iostream>
#include "Reloj.cpp"

using namespace std;

int main() {

    // Creación de objeto
    Reloj miReloj;
    Reloj rolex;

    // Modificación de atributos
    miReloj.iniciar(1, 10, 0);
    miReloj.set_fecha("14/11/2025");

    rolex.iniciar(1, 20, 0);
    rolex.set_fecha("25/12/2025");

    // Invocar métodos
    miReloj.muestraReloj();
    cout << "----------------------" << endl;
    rolex.muestraReloj();

    return 0;
}