//
//  Serie.cpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//

#include "Serie.hpp"
#include "Episodio.hpp"

Serie::Serie() : Video() {};

Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio) : Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio) {
    cantidad = 0;
};

// metodos modificadores (setters)
void Serie::setEpisodio(int _index, Episodio _episodios) {
    if (cantidad >= 0 && _index < cantidad) {
        Episodios[_index] = _episodios;
    }
};

void Serie::setCantidad(int _cantidad) {
    cantidad = _cantidad;
};

// metodos de acceso (getters)
Episodio Serie::getEpisodio(int _index) {
    Episodio ep;
    if(cantidad >= 0 && _index < cantidad)
        return Episodios[_index];
    else
        return Episodio();
};

int Serie::getCantidad() {
    return cantidad;
};

// metodo que calcula promedio
double Serie::calculaCalPromedio() {
    double acum = 0;
    for(int index = 0; index < cantidad; index++)
        acum = acum + Episodios[index].getCalificacion();
    
    if (cantidad > 0)
        return acum / cantidad;
    else
        return 0;
};

// metodo str que regresa un string
string Serie:: str() {
    string acum = "\n";
    
    for(int index = 0; index < cantidad; index++)
        acum = acum + Episodios[index].str() + "\n";
    
    
    return iD + " , titulo: " + titulo + ", duracion: " + to_string(duracion) + ", genero: " + genero + ", calificacion promedio: " + to_string(calificacionPromedio) + acum;
};

ostream &operator << (ostream &out, const Serie &s) {
    string acum = "\n";
    
    for (int index = 0; index < s.cantidad; index++) {
        acum = acum + to_string(index) + "-" + s.Episodios[index].str() + "\n";
    }
    out << s.iD << ", " << s.titulo << ", " << s.duracion << ", " << s.genero << ", " << s.calificacionPromedio << acum << endl;
    return out;
}
