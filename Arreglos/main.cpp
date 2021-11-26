#include <iostream>
#include "Alumno.h"
#include "Salon.h"
using namespace std;

int main(){

    Alumno a1("A01211914","Andrés Torres");
    Alumno a2("A02312739","Pedro Pérez");
    Alumno a3("A02312738","Luis González");
    Alumno a4("A02312737","Juan López");

    Salon salon("TC1033.106");
    salon.agregarAlumno(a1,0);
    salon.agregarAlumno(a2,1);
    salon.agregarAlumno(a3,2);
    salon.agregarAlumno(a4,3);
    salon.imprimirSalon();

    return 0;
}
