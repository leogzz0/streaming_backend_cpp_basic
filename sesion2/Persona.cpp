// Persona.cpp

#include <iostream>

using namespace std;

#include "Persona.hpp"

Persona::Persona() {
    nombre = "Leonardo";
    edad = 20;
}

Persona::Persona(string _nombre, int _edad) {
    nombre = _nombre;
    edad = _edad;
}
string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() { 
    return edad;
}

void Persona::setNombre(string _nombre) {
    nombre = _nombre;
}

void Persona::setEdad(int _edad) {
    edad = _edad;
}

string Persona::str() {
    return "Nombre: "+ nombre + " edad: " + to_string(edad);
}