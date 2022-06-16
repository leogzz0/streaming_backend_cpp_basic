//
//  Series.hpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 14/06/22.
//

#ifndef Series_hpp
#define Series_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
#include "Serie.hpp"

const int MAX_SERIES = 50;

class Series {
public:
    Series();
    Series(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);
    
    void leerArchivo();
    
    void setPtrSerie(Serie *ptr);
    void setCantidadSeries(int _cantidad);
    
    Serie* getPtrSerie(string _iD);
    int getCantidadSeries();
    
    void reporteTodasSeries();
    void reporteConCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    // void calcularCalificacionSeries();
    
private:
    Serie *arrPtrSeries[MAX_SERIES];
    int cantidad;
    
};

#endif /* Series_hpp */
