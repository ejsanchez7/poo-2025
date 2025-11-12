#include <iostream>

using namespace std;

bool comprobar_triangulo(float a, float b, float c) {
    if( (a + b > c) && (a + c > b) && (b + c > a) ) {
        return true;
    }
    return false;
}
        
string tipo_triangulo(float a, float b, float c) {

    if(comprobar_triangulo(a, b, c)) {
        if(a == b == c) {
            return "equilatero";
        }
        else if( (a == b) || (b == c) ) {
            return "isoceles";
        }
        else {
            return "escaleno";
        }
    }
    else {
        return "no es triangulo";
    }
}


int main() {

    float lado_a, lado_b, lado_c;

    cout << "Escribe el lado A: ";
    cin >> lado_a;
    cout << "Escribe el lado B: ";
    cin >> lado_b;
    cout << "Escribe el lado C: ";
    cin >> lado_c;
    
    cout << tipo_triangulo(lado_a, lado_b, lado_c) << endl;

    return 0;
}