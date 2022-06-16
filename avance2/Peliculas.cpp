//
//  Peliculas.cpp
//  proyect-avance
//
//  Created by Leonardo Gonzalez on 30/05/22.
//

#include "Peliculas.hpp"


Peliculas::Peliculas(){};
Peliculas::Peliculas(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares){};

// metodos modificadores (setters)
void Peliculas::setPtrPelicula(Pelicula *_ptrPelicula){
    if (cantidad < 50) {
        arrPtrPeliculas[cantidad++] = _ptrPelicula;
    }
};

void Peliculas::setCantidadPeliculas(int _cantidad){
    cantidad = _cantidad;
};

// metodos de acceso (getter)
Pelicula* Peliculas::getPtrPelicula(string _iD){
    for (int iR =0; iR < cantidad; iR++) {
        if (arrPtrPeliculas[iR]->getId() == _iD) {
            return arrPtrPeliculas[iR];
        }
    }
    return nullptr;
};

int Peliculas::getCantidadPeliculas(){
    return cantidad;
};

// otros metodos
void Peliculas::leerArchivo(){
    //fin - file input
    fstream fin;
    // Para almacenar los datos leidos del archivo :arreglo de string
    string row[6];
    // line almacena la linea leida, y word la palabra que se saca de line
    string line, word;

    //Abrir archivo de entrada

    fin.open("/Users/leonardogzz/Desktop/proyecto-avance/proyect-avance/proyect-avance/Pelicula.csv",ios::in);

    // inicializar el atributo cantidad 0
    cantidad = 0;
    // leer una línea del archivo y la almaneca en line
    while (getline(fin,line)){

        // despliega en consola la linea - BORRAR o COMENTAR cout´s
        // cout << cantidad << line << endl;

        // usando para separar las palabras split()
        stringstream s(line);

        // read every column data of a row and store it in a string variable, 'word'
        int iR = 0;

        //Extrae caracteres de s y los almacena en word hasta que encuentre el delimitador ','

        while (getline(s,word,',')){
            // Añade la word al arreglo row e incremente iR p/ la proxima palabra
            row[iR++] = word;
        }
        // [0]100,[1]Pulp Ficcion,[2]178,[3]Accion,[4]9.2,[5]1
        // Operador nwe crear un objeto del tipo Pelicula - mem dinamica - HEAP
        // stoi - funcion que convierte un string a int
        // stod - funcion que convierte un string a double

        arrPtrPeliculas[cantidad] = new Pelicula(row[0],row[1],stoi(row[2]),row[3],stod(row[4]),stoi(row[5]));

        // Se muestra en consola la separación - BORRAR o COMENTAR cout's
        cout << "Id: " << row[0] << "\n";
        cout << "Titulo: " << row[1] << "\n";
        cout << "Duración: " << row[2] << "\n";
        cout << "Genero: " << row[3] << "\n";
        cout << "Calificación: " << row[4] << "\n";
        cout << "Oscares: " << row[5] << "\n";
        cout << endl;

        // Desplegamos en consola la pelicula con el metodo str() de pelicula - BORRAR o COMENTAR cout's
        // cout << "Dentro del objeto: " << arrPtrPeliculas[cantidad]->str() << endl;

        cantidad++;
    }
    fin.close();

    // Sale del ciclo cunado ya no existen más lineas en el archivo

    //Desplegar todas las peliculas leidas - BORRAR o COMENTAR ciclo con cout's

    /*
     for (int iR = 0; iR < cantidad; iR++){
        cout << iR << "-" << arrPtrPeliculas[iR]->str() << endl;
    }*/
}

// metodo que regresa arreglo de todas las peliculas
void Peliculas::reporteTodasPeliculas(){
    double acum = 0;
    for(int iR = 0; iR < cantidad; iR++) {
        cout << iR << "-" << arrPtrPeliculas[iR]->str() << endl;
        acum = acum + arrPtrPeliculas[iR]->getCalificacion();
    }
    if(cantidad == 0) {
        cout << "No se encontraron peliculas." << endl;
    }
};

// metodo que regresa las peliculas de una calificacion seleccionada por el usuario
void Peliculas::reporteConCalificacion(double _calificacionPromedio){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        if(arrPtrPeliculas[iR]->getCalificacion() == _calificacionPromedio) {
            cout << arrPtrPeliculas[iR]->str() << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "No se enocntraron peliculas con esta calificacion -> " << _calificacionPromedio <<endl;
    }
};

// metodo que regresa las peliculas de un genero seleccionado por el usuario
void Peliculas::reporteGenero(string _genero){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++) {
        if (arrPtrPeliculas[iR]->getGenero() == _genero) {
            cout << iR << "" << arrPtrPeliculas[iR]->str() << endl;
            count++;
        }
    }if (count == 0) {
        cout << "No se encontraron peliculas de este genero -> " << _genero << endl;
    }
};
