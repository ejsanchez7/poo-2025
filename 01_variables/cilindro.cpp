/*
Desarrolla el algoritmo y posteriormente un programa completo en Python que
determine el volumen de la siguiente figura geométrica (imagine que es un
medio cilindro). El radio (r) y la altura (h) son solicitadas al usuario.
*/
#include <iostream>
#include <cmath>

using namespace std;

// Definir la constante pi
const float PI = 3.141592;

int main() {

    // Declarar variables
    float radio;
    float altura;

    // Pedir al usuario el valor del radio y la altura
    cout << "Escribe el radio: ";
    cin >> radio;
    cout << "Escribe la altura: ";
    cin >> altura;

    // Calcular el volumen del cilindro usando la fórmula y guardarla en una variable
    float volumen = PI * pow(radio, 2) * altura;

    // Dividir el volumen entre 2 para obtener el volumen del medio cilindro
    float resultado = volumen / 2;

    // Mostrar el resultado
    cout << "El volumen del medio cilindro con radio " << radio 
        << " y altura " << altura  << " es: " << resultado << endl;

    return 0;
}

