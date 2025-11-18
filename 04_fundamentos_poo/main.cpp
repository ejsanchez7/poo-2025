#include <iostream>
#include "Reloj.cpp"

using namespace std;

int main() {

    // Creación de objeto
    Reloj miReloj;
    Reloj rolex((3 * 3600), "25/12/2025");

    // Invocar métodos
    miReloj.muestraReloj();
    cout << "----------------------" << endl;
    rolex.muestraReloj();

    // Modificación de atributos  
    miReloj.iniciar(1, 10, 0);
    miReloj.set_fecha("14/11/2025");

    cout << "----------------------" << endl;
    miReloj.muestraReloj();

    return 0;
}