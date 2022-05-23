#include "Estudiante.hpp"

Estudiante::Estudiante( ) : Persona( ) {
    carrera = "Chef";
}
Estudiante::Estudiante(string _nombre, int _edad, string _carrera) : Persona(_nombre, _edad) {
    carrera = _carrera;
}
string Estudiante::getCarrera() {
    return carrera;
}
void Estudiante::setCarrera(string _carrera){
    carrera = _carrera;
}
string Estudiante::str() {
    return "Nombre: " + nombre + " edad: " + to_string(edad) + " Carrera: "+ carrera;
}