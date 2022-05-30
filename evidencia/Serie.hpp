//
//  Serie.hpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 29/05/22.
//

#ifndef Serie_hpp
#define Serie_hpp

#include <stdio.h>
#include "Video.hpp"
#include "Episodio.hpp"

class Serie: public Video {
public:
    Serie();
    Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _episodio, int _cantidad);
    
    void setEpisodio(int _index, Episodio _episodio);
    void setCantidad(int _cantidad);
    
    Episodio getEpisodio(int _index);
    int getCantidad();
    
    double caluclaCalPromedio();
    
    string str();
    
private:
    Episodio episodios[5];
    int cantidad;
    
};

#endif /* Serie_hpp */
