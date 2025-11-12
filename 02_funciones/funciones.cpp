#include <iostream>

using namespace std;

float millas_kilometros(float millas) {
    float kilometros = millas * 1.60934;
    return kilometros;
}

// La función libras_kilos que convierta la cantidad dada en libras a kilos.
float libras_kilos(float libras) {
    float kilos = libras * 0.453592;
    return kilos;
}

void going_to_mexico(float millas, float libras) {
    float kilometros = millas_kilometros(millas);
    float kilos = libras_kilos(libras);
    cout << millas << " millas son " << kilometros << " kilómetros." << endl;
    cout << libras << " libras son " << kilos << " kilos." << endl;
}