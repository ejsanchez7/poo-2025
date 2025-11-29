#pragma once
#include <iostream>
#include "Posicion.cpp"

using namespace std;

class Figura {
    protected:
        Posicion posicion;
        int angulo;
        string color;

    public:
        Figura(){
            angulo = 0;
            color = "#000000";
        }

        Figura(Posicion pos, int _angulo, string _color){
            posicion = pos;
            angulo = _angulo;
            color = _color;
        }

        Posicion getPosicion(){
            return posicion;
        }
        
        int getAngulo(){
            return angulo;
        }
        
        string getColor(){
            return color;
        }

        void setPosicion(Posicion pos){
            posicion = pos;
        }
        
        void setAngulo(int _angulo){
            angulo = _angulo;
        }
        
        void setColor(string _color){
            color = _color;
        }

        // Métodos abstractos (se implementan en las clases hijas)
        virtual void dibujar() = 0;
        virtual float calcularArea() = 0;
        virtual float calcularPerimetro() = 0;
};