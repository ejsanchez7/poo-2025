#include <iostream>
#include "Fecha.cpp"

using namespace std;

class Reloj {

    /***************************************
        Definición de atributos (estado)
    ****************************************/

    // protected: (solo esta clase y las clases hijas tienen acceso)
    private: // Solo esta clase tiene acceso
        int segundos;
        Fecha fecha; // 2025-01-01

        /****************************************************************
            Métodos privados auxiliares para funcionamiento interno
        *****************************************************************/

        int hora_a_segundos(int horas, int minutos, int segundos) {
            return (horas * 3600) + (minutos * 60) + segundos;
        }

        string dos_digitos(int numero) {
            string prefijo = (numero < 10) ? "0" : "";
            return (prefijo + to_string(numero));
        }
     
    public:  // Todos tienen acceso

        /*********************
            Constructores
        **********************/
        // Constructor por omisión
        Reloj() {
            segundos = (17 * 3600);
        }

        // Constructor por parámetros
        Reloj(int _segundos, int dia, int mes, int anio) {
            segundos = _segundos;
            fecha = Fecha(dia, mes, anio);
        }

        /**********************************************************
            Getters y setters (funcionalidad / comportamiento)
        ***********************************************************/
        // Getters (devuelven el valor de los atributos)
        Fecha get_fecha() {
            return fecha;
        }

        // Setters (modifican los valores de los atributos)
        void set_fecha(int dia, int mes, int anio) {
            if((dia > 0 && dia <= 31) && (mes > 0 && mes <= 12)){ 
                fecha = Fecha(dia, mes, anio);
            }
            else{
                cout << "los datos son incorrectos";
        
            }
        }
        
        /********************************************************
            Métodos comunes (funcionalidad / comportamiento)
        *********************************************************/
        void iniciar(int horas, int minutos, int segs) {
            // segs para no confundirlo con el atributo segundos
            segundos = hora_a_segundos(horas, minutos, segs);
        }

        void incrementar_tiempo(int horas, int minutos, int segs) {
            // segs para no confundirlo con el atributo segundos
            segundos += hora_a_segundos(horas, minutos, segs);
        }

        void muestraReloj() {
            int horas = segundos / 3600;
            int resto = segundos % 3600;
            int minutos = resto / 60;
            int segs = resto % 60;

            cout << "Hora: " << dos_digitos(horas) << ":" << dos_digitos(minutos) 
                << ":" << dos_digitos(segs) << endl;
            cout << "Fecha: ";
            fecha.muestra_fecha();
            cout  << endl;
        }
};

