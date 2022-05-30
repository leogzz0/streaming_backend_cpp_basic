//
//  Pelicula.cpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 29/05/22.
//

#include "Pelicula.hpp"

Pelicula::Pelicula() : Video() {
    oscares = 2;
};

Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares) : Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio) {
    oscares = _oscares;
};

void Pelicula::setOscares(int _oscares) {
    oscares = _oscares;
};

int Pelicula::getOscares() {
    return oscares;
}

string Pelicula:: str() {
    return iD + " , titulo: " + titulo + ", duracion: " + to_string(duracion) + ", genero: " + genero + ", calificacion promedio: " + to_string(calificacionPromedio) + ", oscares: " + to_string(oscares);
}
