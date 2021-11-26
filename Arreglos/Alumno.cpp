#include "Alumno.h"

Alumno::Alumno(){
    nombre="Sin nombre";
    matricula="Sin matricula";
}
Alumno::Alumno(string nombre,string matricula){
    this->nombre=nombre;
    this->matricula=matricula;
}
void Alumno::setNombre(string nombre){
    this->nombre=nombre;
}
void Alumno::setMatricula(string matricula){
    this->matricula=matricula;
}
string Alumno::getMatricula(){
    return matricula;
}
string Alumno::getNombre(){
    return nombre;
}
