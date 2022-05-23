//
//  Video.hpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 23/05/22.
//

#ifndef Video_hpp
#define Video_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Video {
protected:
    string iD;
    string titulo;
    int duracion;
    string genero;
    double calificacionPromedio;
    
    // metodos
public:
    // constructores
    Video();
    Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);
    
    // metodos modificadores (setters)
    void setId(string _iD);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacionPromedio);
    
    // metodos de acceso (getters)
    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacion();
    
    // metodos restantes
    string str();
};

#endif /* Video_hpp */
