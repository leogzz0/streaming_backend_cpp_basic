//
//  Serie.hpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//

#ifndef Serie_hpp
#define Serie_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include "Video.hpp"
#include "Episodio.hpp"
using namespace std;

class Serie: public Video {
public:
    // constructores
    Serie();
    Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);
    
    // metodos modificadores (setters)
    void setEpisodio(int _index, Episodio _episodios);
    void setCantidad(int _cantidad);
    
    // metodos de acceso (getters)
    Episodio getEpisodio(int _index);
    int getCantidad();
    
    // otros metodos
    double calculaCalPromedio();
    
    string str();
    friend ostream &operator << (ostream &out, const Serie &s);
    
private:
    Episodio Episodios[5];
    int cantidad;
    
};

#endif /* Serie_hpp */
