#ifndef SALON_DEFINED
#define SALON_DEFINED
#include <string>
#include "Alumno.h"
using namespace std;
class Salon{

    private:
        string clave;
        Alumno alumnos[4];
    
    public: 
        Salon(string clave);
        void agregarAlumno(Alumno alumno,int pos);
        void imprimirSalon();
};

#endif
