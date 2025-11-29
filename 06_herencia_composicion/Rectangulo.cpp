#pragma once
#include <iostream>
#include "Figura.cpp"
#include "Posicion.cpp"

using namespace std;

//implementación de herencia
class Rectangulo : public Figura {
    private:
        float base;
        float altura;

    public:
        // El constructor de la clase hija invoca al de la clase madre
        Rectangulo() : Figura() {
            base = 1;
            altura = 1;
        }

        Rectangulo(float _base, float _altura, Posicion pos, int _angulo, string _color) : Figura(pos, _angulo, _color){
            base = _base;
            altura = _altura;
        }

        float getBase(){
            return base;
        }

        float getAltura(){
            return altura;
        }

        void setBase(float _base){
            base = _base;
        }

        void setAltura(float _altura){
            altura = _altura;
        }

        void dibujar(){
            cout << "Dibuja un rectangulo";
        }

        float calcularArea() {
            return (base * altura);
        }

        float calcularPerimetro(){
            return ((2 * base) + (2 * altura));
        }
};