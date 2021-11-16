#include <iostream>

using namespace std;
class Nota{
    private:
        string nota;
    public:
        Nota();
        Nota(string nota);
        string getNota();
        

};

Nota::Nota(){
    nota="Nota vacia";
}
Nota::Nota(string nota){
    this->nota=nota;
}

string Nota::getNota(){
    return nota;
}
