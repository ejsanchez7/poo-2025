#include <iostream>

using namespace std;

#ifndef FECHA

#define FECHA

class Fecha {
    private:
        int dia;
        int mes;
        int anio;

        string dos_digitos(int numero) {
            string prefijo = (numero < 10) ? "0" : "";
            return (prefijo + to_string(numero));
        }

    public:
        Fecha() {
            dia = 1;
            mes = 1;
            anio = 2025;
        }

        Fecha(int _dia, int _mes, int _anio) {
            dia = _dia;
            mes = _mes;
            anio = _anio;
        }

        int get_dia(){
            return dia;
        }

        int get_mes(){
            return mes;
        }

        int get_anio(){
            return anio;
        }

        void set_dia(int _dia) {
            dia = _dia;
        }

        void set_mes(int _mes) {
            mes = _mes;
        }

        void set_anio(int _anio) {
            anio = _anio;
        }

        void muestra_fecha() {
            cout << dos_digitos(dia) << "/" << dos_digitos(mes) 
                << "/" << anio;
        }
};

#endif