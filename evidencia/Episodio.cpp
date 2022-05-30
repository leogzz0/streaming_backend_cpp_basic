//
//  Episodio.cpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 29/05/22.
//

#include "Episodio.hpp"

Episodio::Episodio() {
    eTitulo = "";
    eTemporada = 0;
    eCalificacion = 0;
};

Episodio::Episodio(string _titulo, int _temporada, double _califacion) {
    eTitulo = _titulo;
    eTemporada = _temporada;
    eCalificacion = _calificacion;
};

void Episodio::setTitulo(<#string _titulo#>) {
    eTitulo = _titulo;
};

void Episodio::setTemporada(<#int _temporada#>) {
    eTemporada = _temporada;
};

void Episodio::setCalificacion(<#int _calificacion#>) {
    eCalificacion = _calificacion;
};
                                                

string Episodio::getTitulo() {
    return eTitulo;
};

int Episodio::getTemporada() {
    return eTemporada;
};

int Episodio::getCalificacion() {
    return eCalificacion;
}
 
