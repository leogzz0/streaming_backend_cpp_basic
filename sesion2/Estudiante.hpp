// Estudiante.hpp
#ifndef Estudiante_hpp
#define Estudiante_hpp
#include <stdio.h>
#include <iostream>
#include "Persona.hpp"


class Estudiante : public Persona {
    public:
        Estudiante();
        Estudiante(string, int, string);
        string getCarrera();
        void setCarrera(string);
        string str();
        private:
        string carrera;
};

#endif 