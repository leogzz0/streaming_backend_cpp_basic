//
//  Pelicula.hpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 29/05/22.
//

#ifndef Pelicula_hpp
#define Pelicula_hpp

#include <stdio.h>
#include "Video.hpp"

class Pelicula: public Video {
public:
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
    
    void setOscares(int _oscares);
    
    int getOscares();
    
    string str();
    
private:
    int oscares;
};

#endif /* Pelicula_hpp */
