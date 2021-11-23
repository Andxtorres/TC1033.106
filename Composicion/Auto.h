#include <iostream>
#include "Motor.h"
using namespace std;
class Auto{
    private:
        string marca;
        string modelo;
        Motor motor;
    public:
        Auto();
        Auto(string marca,string modelo, int potencia,int cilindros);
        void setMarca(string marca);
        void setModelo(string modelo);
        string getMarca();
        string getModelo();
        void imprimeAutoAcelerando();

};
Auto::Auto(){
    marca="Sin marca";
    modelo="Sin modelo";
}

Auto::Auto(string marca,string modelo,int potencia,int cilindros){
    this->marca=marca;
    this->modelo=modelo;
    motor=Motor(potencia,cilindros);
}

void Auto::setMarca(string marca){
    this->marca=marca;
}
void Auto::setModelo(string modelo){
    this->modelo=modelo;
}
string Auto::getMarca(){
    return marca;
}
string Auto::getModelo(){
    return modelo;
}

void Auto::imprimeAutoAcelerando(){
    cout<<"El auto "<<marca<<" "<<modelo<<" esta acelerando con el motor: "<<endl;
    motor.acelerar();
}
