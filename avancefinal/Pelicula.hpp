//
//  Pelicula.hpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//

#ifndef Pelicula_hpp
#define Pelicula_hpp

#include <stdio.h>
#include <iostream>
#include "Video.hpp"
using namespace std;

class Pelicula: public Video {
public:
    // constructores
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
    
    // metodos modificadores (setters)
    void setOscares(int _oscares);
    
    // metodos de acceso (getters)
    int getOscares();
    
    // otros metodos
    string str();
    friend ostream &operator << (ostream &out, const Pelicula &p);
    
private:
    int oscares;
};

#endif /* Pelicula_hpp */
