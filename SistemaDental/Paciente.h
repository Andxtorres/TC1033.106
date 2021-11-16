#include <iostream>
#include "Nota.h"
#include "Cita.h"
using namespace std;
class Paciente{

    private:
        string nombre;
        string telefono;
        Nota notas[10];
        Cita citas[10];

    public:
        Paciente(string nombre,string telefono);
        void agregarNota(string notaString,int pos);
        void agregarCita(string citaString,int pos);
        void imprimeCitas();
        void imprimeNotas();


};


Paciente::Paciente(string nombre,string telefono){
    this->nombre=nombre;
    this->telefono=telefono;
}

void Paciente::agregarNota(string notaString,int pos){
    Nota nota(notaString);
    notas[pos]=nota;
}

void Paciente::agregarCita(string citaString,int pos){
    Cita cita(citaString);
    citas[pos]=cita;
}

void Paciente::imprimeCitas(){
    cout<<"----- Citas de "<<nombre<<" -------"<<endl;
    for (int i=0;i<10;i++){
        cout<<(i+1)<<" .- "<<citas[i].getFecha()<<" y su estatus es: "<<citas[i].getActivo()<<endl;
    }
}


void Paciente::imprimeNotas(){
    cout<<"----- Notas de "<<nombre<<" -------"<<endl;
    for (int i=0;i<10;i++){
        cout<<(i+1)<<" .- "<<notas[i].getNota()<<endl;
    }
}
