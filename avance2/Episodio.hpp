//
//  Episodio.hpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//

#ifndef Episodio_hpp
#define Episodio_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Episodio {
protected:
    string titulo;
    int temporada;
    double calificacion;
    
public:
    // constructores
    Episodio();
    Episodio(string _titulo, int _temporada, double _calificacion);
    
    // metodo modificador (setters)
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(double _calificacion);
    
    // metodo de acceso (getters)
    string getTitulo();
    int getTemporada();
    int getCalificacion();
    
    // metodos restantes
    string str() const;
};

#endif /* Episodio_hpp */
