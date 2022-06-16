//
//  Series.cpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 14/06/22.
//

#include "Series.hpp"

// constructores
Series::Series() {
    cantidad = 0;
};

Series::Series(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio) {
    cantidad = 0;
};

// setters
void Series::setCantidadSeries(int _cantidad) {
    cantidad = _cantidad;
};

// getters
Serie* Series::getPtrSerie(string _iD) {
    for (int iR = 0; iR < cantidad; iR++) {
        if(_iD == arrPtrSeries[iR]->getId()) {
            return arrPtrSeries[iR];
        }
    }
    return NULL;
};

int Series::getCantidadSeries() {
    return cantidad;
};

// metodo que regresa todas las series
void Series::reporteTodasSeries() {
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        cout << arrPtrSeries[iR]->str() << endl;
        count++;
    }
    if (count == 0) {
        cout << "No se encontraron series" << endl;
    }
}

// metodo que regresa lista con la calificacion seleccionada por el usuario
void Series::reporteConCalificacion(double _calificacion) {
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        if(arrPtrSeries[iR]->getCalificacion() == _calificacion) {
            cout << arrPtrSeries[iR]->str() << endl;
            count++;
        }
        if(count == 0) {
            cout << "no se ecnontraron series con esta calificacion -> " << _calificacion <<endl;
        }
    }
}

// metodo que regresa lista con el genero seleccionado por el usuario
void Series::reporteGenero(string _genero) {
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        if (arrPtrSeries[iR]->getGenero() == _genero) {
            cout << arrPtrSeries[iR]->str() << endl;
            count++;
        }
        if (count == 0) {
            cout << "No se encontraron series de este genero -> " << _genero << endl;
        }
    }
}

// metodo que regresa un promedio de las calificaciones de todas las series
//void Series::calcularCalificacionSeries() {
//    int count = 0;
//    for (int iR = 0; iR < cantidad; iR++) {
//        if(arrPtrSeries[iR]->getCalificacion() == _calificacion)
//        
//    }
//}


// Lee las Series desde un archivo cvs y las carga en el arreglo arrPtrSeries
void Series::leerArchivo(){
    // Declaración de variables para usarlas al leer cada línea del archivo
    string linea, dato, row[6];
    // Variable para llevar el contador de cantidad de series leídas del archivo
    int iRow{}, iS{}, cantEpisodios{};
    // Declaración de variable para el archivo
    fstream lectura;
    Episodio *episodios;

    // **************** LEER LAS SERIES *****************

    lectura.open("/Users/leonardogzz/Desktop/proyecto-avance/proyect-avance/proyect-avance/Serie2021.csv",ios::in);
    // inicialiar el atributo cantidad de Series con 0
    cantidad = 0;
    // ciclo para leer todo el archivo
    while (getline(lectura, linea)){ // lee una línea del archivo, corresponde a una serie
        // Para que la mando a desplegar? para verificar que se está leyendo correctamente el archivo
        cout << linea << endl; // BORRAR
        std::stringstream registro(linea);
        iRow = 0;
        // ciclo para separar los elementos de la serie (string)
        while (getline(registro, dato, ',')){
            cout << dato << endl;
            row[iRow++] = dato;
        }
        // crear un objeto de la clase Serie, new retorna un pointer
        arrPtrSeries[cantidad] = new Serie(row[0], row[1], stoi(row[2]), row[3],stod(row[4],0));
        // Para verificar si se inicializo correctamente el objeto
        arrPtrSeries[cantidad] -> str(); // BORRAR
        // vamos por la siguiente serie del archivo, se incremente para la siguiente cantidad
        cantidad++;
    }
    lectura.close();

    // LEER LOS EPISODIOS DE LAS SERIES
    lectura.open("/Users/leonardogzz/Desktop/proyecto-avance/proyect-avance/proyect-avance/Episodio2021.csv", ios::in);
    // ciclo para leer todo el archivo
    while (getline(lectura,linea)){
        // Desplegar el apisodio leido - solo para corroborar
        cout << linea << endl; // BORRAR
        std::stringstream registro(linea);

        iRow = 0;
        while (getline(registro,dato,',')){ // Separar los datos del apisodio desde la linea registro
            row[iRow++] = dato;
        } // al salir de aqui ya se separo toda la línea

        // iD - convertir int - sacar la posición de la serie 500 - 0, 501 - 1, 502
        iS = stoi(row[0]) - 500; // posición del arreglo donde esta el ptr de la serie pertenece el episodio

        //crear el Episodio
        episodios = new Episodio(row[1], stoi(row[2]),stod(row[3]));

        // Traer la cantidad de episodios de la serie iS - la 1a vez retorna 0
        cantEpisodios = arrPtrSeries[iS]->getCantidad();
        // verificar si todavía podemos añadir otro Episodio al arreglo
        if (cantEpisodios < 5){
            arrPtrSeries[iS]->setEpisodio(cantEpisodios, *(episodios));
            arrPtrSeries[iS]->setCantidad(++cantEpisodios);
        }
        //cout << arrPtrSeries[iS]->str() << endl; // BORRAR ***
    }
    lectura.close();

    // desplegar todas las series con sus episodios
    // manda a llamar al método str() de la clase serie
    for(int iS = 0; iS < cantidad; iS++){
        cout << arrPtrSeries[iS]->str() << endl;
    }
}
