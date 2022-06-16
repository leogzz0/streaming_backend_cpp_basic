//
//  Episodio.cpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//
#include <string>
#include <cstdlib>
#include "Episodio.hpp"
using namespace std;

// constructores
Episodio::Episodio() {
    titulo = "";
    temporada = 0;
    calificacion = 0.0;
};

Episodio::Episodio(string _titulo, int _temporada, double _calificacion) {
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
};

// metodos modificadores (setters)
void Episodio::setTitulo(string _titulo) {
    titulo = _titulo;
};

void Episodio::setTemporada(int _temporada) {
    temporada = _temporada;
};

void Episodio::setCalificacion(double _calificacion) {
    calificacion = _calificacion;
};

// metodos de acceso (getters)
string Episodio::getTitulo() {
    return titulo;
};

int Episodio::getTemporada() {
    return temporada;
};

int Episodio::getCalificacion() {
    return calificacion;
}

// metodo str que regresa un string
string Episodio::str() const {
    return "titulo de capitulo: " + titulo + ", temporada " + to_string(temporada) + ", calificacion: " + to_string(calificacion) + "\n";
};
