#include <iostream>
#include "Figura.cpp"
#include "Circulo.cpp"
#include "Rectangulo.cpp"
#include "Demo.cpp"
#include <vector>

using namespace std;

class Dibujo {
    private:
        vector<Figura*> listaFiguras;
        vector<Demo*> listaDemo;
        string nombre;
        string autor;

    public:
        Dibujo(){
            nombre = "Dibujo";
            autor = "Anonimo";
        }

        Dibujo(string _nombre, string _autor){
            nombre = _nombre;
            autor = _autor;
        }

        vector<Figura*> getListaFiguras(){
            return listaFiguras;
        }

        string getNombre(){
            return nombre;
        }
        
        string getAutor(){
            return autor;
        }

        void setNombre(string _nombre){
            nombre = _nombre;
        }
        
        void setAutor(string _autor){
            autor = _autor;
        }

        void agregarCirculo(float radio, Posicion pos, int angulo, string color){
            Circulo *circulo = new Circulo(radio, pos, angulo, color);
            listaFiguras.push_back(circulo);
        }

        void agregarRectangulo(float base, float altura, Posicion pos, int angulo, string color){
            Rectangulo *rectangulo = new Rectangulo(base, altura, pos, angulo, color);
            listaFiguras.push_back(rectangulo);
        }

        void agregarDemo(Demo &demo) {
            listaDemo.push_back(&demo);
        }

        void dibujar(){
            for(int i = 0; i < listaFiguras.size(); i++){
                //(*listaFiguras[i]) objeto Figura
                //listaFiguras[i] localidad de memoria
                //(*listaFiguras[i]).dibujar();
                listaFiguras[i]->dibujar();
                cout << endl;
            }
        }

        void mostrarDemo() {
            for(int i = 0; i < listaDemo.size(); i++){
                listaDemo[i]->mostrar();
                cout << endl;
            }
        }
};