//
//  Episodio.hpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 29/05/22.
//

#ifndef Episodio_hpp
#define Episodio_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Episodio {
protected:
    string eTitulo;
    int eTemporada;
    double eCalificacion;
    
public:
    Episodio();
    
    Episodio(string _titulo, int _temporada, double _califacion);
    
    
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);
    
    string getTitulo();
    int getTemporada();
    int getCalificacion();
    
    string str();
};



#endif /* Episodio_hpp */
