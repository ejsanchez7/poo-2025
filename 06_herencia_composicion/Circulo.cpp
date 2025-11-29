#pragma once
#include <iostream>
#include <cmath>
#include "Figura.cpp"
#include "Posicion.cpp"

using namespace std;

//implementación de herencia
class Circulo : public Figura {
    private:
        float radio;

    public:
        // El constructor de la clase hija invoca al de la clase madre
        Circulo() : Figura() {
            radio = 1;
        }

        Circulo(float _radio, Posicion pos, int _angulo, string _color) : Figura(pos, _angulo, _color){
            radio = _radio;
        }

        float getRadio(){
            return radio;
        }

        void setRadio(float _radio){
            radio = _radio;
        }

        void dibujar(){
            cout << "Dibuja un circulo";
        }

        float calcularArea() {
            return (M_PI * radio * radio);
        }

        float calcularPerimetro(){
            return (2 * M_PI * radio);
        }
};