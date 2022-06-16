//
//  Peliculas.hpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//

#ifndef Peliculas_hpp
#define Peliculas_hpp

#include <stdio.h>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
#include "Pelicula.hpp"

const int MAX_PEL = 50;

class Peliculas {
public:
    // constructores
    Peliculas();
    Peliculas(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
    
    // metodos modificadores (setters)
    void setPtrPelicula(Pelicula *_ptrPelicula);
    void setCantidadPeliculas(int _cantidad);
    
    // metodos de acceso (getter)
    Pelicula* getPtrPelicula(string _iD);
    int getCantidadPeliculas();
    
    // otros metodos
    void leerArchivo();
    void reporteTodasPeliculas();
    void reporteConCalificacion(double _calificacionPromedio);
    void reporteGenero(string _genero);
    
private:
    Pelicula *arrPtrPeliculas[MAX_PEL];
    int cantidad;
};

#endif /* Peliculas_hpp */
