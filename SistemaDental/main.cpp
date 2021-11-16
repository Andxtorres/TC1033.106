#include <iostream>
#include "Paciente.h"
using namespace std;

int main(){

    Paciente p("Andres","5541302205");
    p.agregarCita("16 de Noviembre a las 13:00 ",5);
    p.imprimeCitas();
    p.agregarNota("Esta es la nota 1 de Andres",0);
    p.imprimeNotas();
    return 0;
}
