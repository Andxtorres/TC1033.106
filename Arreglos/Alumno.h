#ifndef ALUMNO_DEFINED
#define ALUMNO_DEFINED
#include <string>
using namespace std;
class Alumno{
    private:
        string matricula;
        string nombre;

    public:
        Alumno();
        Alumno(string nombre,string matricula);
        void setNombre(string nombre);
        void setMatricula(string matricula);
        string getNombre();
        string getMatricula();
};

#endif
