#include <iostream>
#include "Dibujo.cpp"
#include "Circulo.cpp"
#include "Rectangulo.cpp"
#include "Demo.cpp"

using namespace std;

int main() {
    Demo prueba(1);
    Dibujo miDibujo("Dibujo", "Erik");
    Dibujo pintura("Test", "Anónimo");

    miDibujo.agregarDemo(prueba);
    pintura.agregarDemo(prueba);
    
    miDibujo.mostrarDemo();
    pintura.mostrarDemo();

    prueba.setId(10);

    miDibujo.mostrarDemo();
    pintura.mostrarDemo();

    return 0;

    Posicion pos(20, 30);
    miDibujo.agregarCirculo(12, pos, 90, "#000000");
    miDibujo.agregarRectangulo(5, 8, pos, 260, "#FF0000");

    //miDibujo.dibujar();
    Circulo miCirculo(5, pos, 0, "#111111");
    Figura *fig = &miCirculo;

    fig->dibujar();
    cout << endl;

    fig = new Rectangulo(23, 45, pos, 10, "#123456");

    fig->dibujar();
    cout << endl;


    return 0;
}