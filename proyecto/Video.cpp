//
//  Video.cpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 23/05/22.
//

#include "Video.hpp"

Video::Video() {
    iD = "000";
    titulo = "La Botella";
    duracion = 90;
    genero = "Terror";
    calificacionPromedio = 5.0;
}

Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio) {
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

// metodos modificadores (setters)
void Video::setId(string _iD){}
void Video::setTitulo(string _titulo){}
void Video::setDuracion(int _duracion){}
void Video::setGenero(string _genero){}
void Video::setCalificacion(double _calificacionPromedio){}

// metodos de acceso (getters)
string Video::getId() {
    return iD;
}

string Video::getTitulo() {
    return titulo;
}

int Video::getDuracion(){
    return duracion;
}

string Video::getGenero() {
    return genero;
}

double Video::getCalificacion(){
    return calificacionPromedio;
}

string Video::str() {
    return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacionPromedio) + ".";
}
