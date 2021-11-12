#include <iostream>
#include "Triangulo.h"
using namespace std;

int main(){
    
    Triangulo t;
    cout<<"La base del triangulo es "<<t.getBase()<< " y la altura "<<t.getAltura()<<" y su area es "<<t.calcularArea()<<endl;
    Triangulo t1(10,20);
    cout<<"La base del triangulo es "<<t1.getBase()<< " y la altura "<<t1.getAltura()<<" y su area es "<<t1.calcularArea()<<endl;
    return -1;
}
