#include <iostream>
using namespace std;
class Motor{
    private:
        int potencia;
        int cilindros;

    public:
        Motor();
        Motor(int potencia,int cilindros);
        void acelerar();
        
};
Motor::Motor(){
    potencia=0;
    cilindros=0;
}
Motor::Motor(int potencia,int cilindros){
    this->potencia=potencia;
    this->cilindros=cilindros;
}
void Motor::acelerar(){
    cout<<" Potencia: "<<potencia<<" cilindros "<<cilindros<<endl;
}
        
