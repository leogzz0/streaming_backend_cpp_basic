//
//  Serie.cpp
//  proyecto
//
//  Created by Leonardo Gonzalez on 29/05/22.
//

#include "Serie.hpp"

Serie::Serie() : Video() {
    cantidad = 0;
};

Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _episodio, int _cantidad) : Video(_iD, _titulo, _duracion, _genero, 0) {
    episodio = _episodio;
    cantidad = _cantidad;
};

void Serie::setEpisodio(int _index, Episodio _episodio) {
    episodio = _episodio;
};

void Serie::setCantidad(int _cantidad) {
    cantidad = _cantidad;
}

Episodio Serie::getEpisodio(int _index) {
    Episodio ep;
    if(cantidad >= 0 && _index < cantidad)
        return episodio[_index];
    else
        return Episodio();
};

int Serie::getCantidad() {
    return cantidad;
}

double Serie::caluclaCalPromedio() {
    double acum = 0;
    for(int index = 0; index < cantidad; index++)
        acum = acum + episodio[index].getCalificacion();
    
    if (cantidad > 0)
        return acumn / cantidad;
    else
        return 0;
}
string Serie:: str() {
    string acum = "\n";
    for(int index = 0; index < cantidad; index++)
        acum = acum + episodio[index].str() + "\n";
    
    
    return iD + " , titulo: " + titulo + ", duracion: " + to_string(duracion) + ", genero: " + genero + ", calificacion promedio: " + to_string(calificacionPromedio) + acum;
}
