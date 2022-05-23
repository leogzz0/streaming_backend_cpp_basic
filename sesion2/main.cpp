#include <iostream>
#include "Estudiante.hpp"
#include "Persona.hpp"

using namespace std;


int main() { 
    // Estudiante leonardo("Leonardo", 20, "ITC");
    Estudiante chabelo("Chabelo", 125, "Medico"), chilindrina;
    Persona chano("Chano", 80), chonita;
    cout << "Los datos del estudiante 1 son: " << chabelo.str() << endl;
    cout << "Los datos del estudiante 2 son: " << endl;
    cout << "Nombre " << chilindrina.getNombre() << " Edad: " << chilindrina.getEdad() << " Carrera " << chilindrina.getCarrera();
    cout << "Los datos de la persona 1 son: " << chano.str() << endl;
    cout << "Los datos de la persona 2 son: "<<endl;
    cout << "Nombre " << chonita.getNombre() << " Edad:" << chonita.getEdad();
    return 0;
}