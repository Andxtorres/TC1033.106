#include "Salon.h"
#include <iostream>
Salon::Salon(string clave){
    this->clave=clave;
}

void Salon::agregarAlumno(Alumno alumno,int pos){
    alumnos[pos]=alumno;
}

void Salon::imprimirSalon(){
    cout<<"-----Salón "<<clave<<"------"<<endl;
    for(int i=0;i<4;i++){
        cout<<(i+1)<<" .- "<<alumnos[i].getMatricula()<<" "<<alumnos[i].getNombre()<<endl;  
    }
}
