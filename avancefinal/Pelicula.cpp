//
//  Pelicula.cpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include "Pelicula.hpp"
using namespace std;

// constructores
Pelicula::Pelicula() : Video() {};

Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares) : Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio) {
    oscares = _oscares;
};

// metodos modificadores (setters)
void Pelicula::setOscares(int _oscares) {
    oscares = _oscares;
};

// metodos de acceso (getters)
int Pelicula::getOscares() {
    return oscares;
}

// metodo str que regresa un string
string Pelicula:: str() {
    return "ID: " + iD + " , titulo: " + titulo + ", duracion (min): " + to_string(duracion) + ", genero: " + genero + ", calificacion promedio: " + to_string(calificacionPromedio) + ", oscares: " + to_string(oscares);
}

ostream &operator << (ostream &out, const Pelicula &p) {
    out << "ID: " << p.iD << ", titulo: " << p.titulo << ", duracion(min): " << p.duracion << ", genero: " << p.genero << ", calificacion promedio: " << p.calificacionPromedio << ", oscares: " << p.oscares << endl;
    return out;
}
