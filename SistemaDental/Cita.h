#include <iostream>

using namespace std;
class Cita{

    private:
        string fecha;
        bool activo;

    public:
        Cita();
        string getFecha();
        Cita(string fecha);
        void cancelarCita();
        void cambiarCita(string fecha);
        bool getActivo();
    
};

Cita::Cita(){
    fecha="Sin Fecha";
}
Cita::Cita(string fecha){
    this->fecha=fecha;
    activo=true;
}

void Cita::cancelarCita(){
    activo=false;
}

void Cita::cambiarCita(string fecha){
    this->fecha=fecha;
}

string Cita::getFecha(){
    return fecha;
}

bool Cita::getActivo(){
    return activo;
}
