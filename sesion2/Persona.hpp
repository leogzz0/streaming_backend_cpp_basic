// Persona.hpp
#ifndef Persona_hpp
#define Persona_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Persona {
    public:
        // constructor default y parametros
        Persona();
        Persona(string, int);

        // getters
        string getNombre();
        int getEdad();

        // setters
        void setNombre(string);
        void setEdad(int);

        string str();
    
    protected:
        string nombre;
        int edad;

};

#endif

