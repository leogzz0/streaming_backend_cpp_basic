//
//  Video.cpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//
#include <string>
#include <cstdlib>
#include "Video.hpp"

Video::Video() {}

Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio) {
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

// metodos modificadores (setters)
void Video::setId(string _iD){
    iD = _iD;
}
void Video::setTitulo(string _titulo){
    titulo = _titulo;
}
void Video::setDuracion(int _duracion){
    duracion = _duracion;
}
void Video::setGenero(string _genero){
    genero = _genero;
}
void Video::setCalificacion(double _calificacionPromedio){
    calificacionPromedio = _calificacionPromedio;
}

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

// metodos restantes
string Video::str() {
    return "ID: " + iD + ", titulo:" + titulo + ", duracion (min): " + to_string(duracion) + ", genero: " + genero + ", calificacion promedio: " + to_string(calificacionPromedio) + ".";
}
